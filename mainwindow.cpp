#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("激光雷达测试上位机");

    b_connect = false;		//heart beat

    led_distance_500 = new LED_lamp(400,60,30);
    led_distance_1000 = new LED_lamp(400,120,30);
    led_station_discern = new LED_lamp(400,180,30);
    led_distance_120 = new LED_lamp(400,240,30);
    led_intensity_mode = new LED_lamp(400, 300, 30);
    led_normal_mode = new LED_lamp(400, 360, 30);

    timer = new QTimer(this);
    timer->setInterval(3000);
    connect(timer, SIGNAL(timeout()), this, SLOT(time_check()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    Painter_Circle(led_distance_500);
    Painter_Circle(led_station_discern);
    Painter_Circle(led_distance_1000);
    Painter_Circle(led_distance_120);
    Painter_Circle(led_intensity_mode);
    Painter_Circle(led_normal_mode);
}

void MainWindow::Painter_Circle(LED_lamp *led)
{
    QPainter painter(this);
    painter.setBrush(led->LED_Color);
    painter.drawEllipse(led->LED_X,led->LED_Y,led->LED_R,led->LED_R);
    update();
}

void MainWindow::show_reporting_mavlink(mavlink_message_t msg)
{
    //测试项结果
    if(msg.msgid == MAVLINK_MSG_ID_TEST_REPORTING)
    {
        mavlink_test_reporting_t t_reporting;
        mavlink_msg_test_reporting_decode(&msg, &t_reporting);
        qDebug() << "Reporting" << t_reporting.item << t_reporting.index <<t_reporting.result;

        if(t_reporting.item == 16)
        {
            if(t_reporting.result == PASS)
            {
                switch (t_reporting.index)
                {
                    case 1: led_distance_1000->LED_State = LED_lamp::Pass; break;
                    case 2: led_distance_500->LED_State = LED_lamp::Pass; break;
                    case 3: led_station_discern->LED_State = LED_lamp::Pass; break;
                    case 4: led_distance_120->LED_State = LED_lamp::Pass; break;
                    case 5: led_intensity_mode->LED_State = LED_lamp::Pass; break;
                    case 6: led_normal_mode->LED_State = LED_lamp::Pass; break;
                }
            }
            else if(t_reporting.result == FAIL)
            {
                switch (t_reporting.index)
                {
                    case 1: led_distance_1000->LED_State = LED_lamp::NoPass; break;
                    case 2: led_distance_500->LED_State = LED_lamp::NoPass; break;
                    case 3: led_station_discern->LED_State = LED_lamp::NoPass; break;
                    case 4: led_distance_120->LED_State = LED_lamp::NoPass; break;
                    case 5: led_intensity_mode->LED_State = LED_lamp::NoPass; break;
                    case 6: led_normal_mode->LED_State = LED_lamp::NoPass; break;
                }

            }
        }
    }
    else if(msg.msgid == MAVLINK_MSG_ID_TEST_RUNNING)
    {
        mavlink_test_running_t t_running;
        mavlink_msg_test_running_decode(&msg, &t_running);
        if(t_running.code == 0x01)
        {
            qDebug() << "Receive Test Start Signal from Robot.";
        }
        else if(t_running.code == 0x03)
        {
            qDebug() << "Receive Test End Signal from Robot.";
        }
    }
    //心跳包
    else if(msg.msgid == MAVLINK_MSG_ID_TEST_GOING_ON)
    {
        emit signal_beat();
        qDebug() << "receive a beat";
    }
}


void MainWindow::on_pushButton_connect_clicked(bool checked)
{
    if(checked)
    {
        if(b_connect == false)
        {
            mav_udp = new MAV_UDP;
            connect(mav_udp,SIGNAL(receive_a_mavlink(mavlink_message_t)),this,SLOT(show_reporting_mavlink(mavlink_message_t)));
            connect(mav_udp, SIGNAL(signal_connected()), this, SLOT(mav_connected()));
            ui->pushButton_connect->setText("连接中...");

//            thread.start();

        }
    }
    else
    {
        on_pushButton_finish_clicked();

        ui->pushButton_connect->setText("连接");
        ui->pushButton_connect->setStyleSheet("color: black;"
                                              "background-color: white;");
        ui->pushButton_connect->setChecked(false);
        ui->pushButton_start->setEnabled(false);
        ui->pushButton_finish->setEnabled(false);
        b_connect = false;

        delete mav_udp->udp_socket;
        delete mav_udp;

        if(timer->isActive())
            timer->stop();

//        if (thread.isRunning())
//        {
//            thread.stop();
//        }
    }
}

void MainWindow::on_pushButton_start_clicked()
{
    mav_udp->udp_running(MSG_Start);
}

void MainWindow::on_pushButton_finish_clicked()
{
    mav_udp->udp_running(MSG_End);

    led_distance_500->LED_State = LED_lamp::Init;
    led_station_discern->LED_State = LED_lamp::Init;
    led_distance_1000->LED_State = LED_lamp::Init;
    led_distance_120->LED_State = LED_lamp::Init;
    led_normal_mode->LED_State = LED_lamp::Init;
    led_intensity_mode->LED_State = LED_lamp::Init;
}

void MainWindow::mav_connected()
{
    ui->pushButton_connect->setText("连接成功");
    ui->pushButton_connect->setStyleSheet("color: black;"
                                          "background-color: green;");
    b_connect = true;
    ui->pushButton_start->setEnabled(true);
    ui->pushButton_finish->setEnabled(true);

    //可让连接成功后再开始监控心跳
    timer->start();
    connect(this, SIGNAL(signal_beat()), this, SLOT(beat()));
    datetime = QDateTime::currentDateTime();
//    qDebug() << datetime;
}

void MainWindow::time_check()
{
    if(datetime.secsTo(QDateTime::currentDateTime()))
    {
        timer->stop();
//        emit dead();
        qDebug() << "connect is breaking";
        disconnect(this, SIGNAL(signal_beat()), this, SLOT(beat()));
        on_pushButton_connect_clicked(false);
    }
}

void MainWindow::beat()     //接收心跳包
{
    if(timer->isActive())
        timer->start();
    datetime = QDateTime::currentDateTime();
}

void MainWindow::on_help_triggered()
{
    QMessageBox::information(NULL,"使用指导","快捷键：开始为左方向键，结束为右方向键\n");
}
