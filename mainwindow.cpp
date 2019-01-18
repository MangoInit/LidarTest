#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("激光雷达测试上位机");

    b_connect = false;		//heart beat

    led_distance1 = new LED_lamp(300,240,30);
    led_distance2 = new LED_lamp(350,240,30);
    led_intensity1 = new LED_lamp(300,290,30);
    led_intensity2 = new LED_lamp(350,290,30);

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
    Painter_Circle(led_distance1);
    Painter_Circle(led_intensity1);
    Painter_Circle(led_distance2);
    Painter_Circle(led_intensity2);
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
    if(msg.msgid == MAVLINK_MSG_ID_TEST_REPORTING)
    {
        mavlink_test_reporting_t t_reporting;
        mavlink_msg_test_reporting_decode(&msg, &t_reporting);
        qDebug() << "Reporting" << t_reporting.item << t_reporting.index <<t_reporting.result;

        //display result from Lidar
        if(t_reporting.item == 16)
        {
            if(t_reporting.index == 1)
            {
                if(t_reporting.result == PASS)
                    led_distance1->LED_State = LED_lamp::Pass;
                else if(t_reporting.result == FAIL)
                    led_distance1->LED_State = LED_lamp::NoPass;
            }
            else if(t_reporting.index == 2)
            {
                if(t_reporting.result == PASS)
                    led_distance2->LED_State = LED_lamp::Pass;
                else if(t_reporting.result == FAIL)
                    led_distance2->LED_State = LED_lamp::NoPass;
            }
        }
        else if(t_reporting.item == 17)
        {
            if(t_reporting.index == 1)
            {
                if(t_reporting.result == PASS)
                    led_intensity1->LED_State = LED_lamp::Pass;
                else if(t_reporting.result == FAIL)
                    led_intensity1->LED_State = LED_lamp::NoPass;
            }
            else if(t_reporting.index == 2)
            {
                if(t_reporting.result == PASS)
                    led_intensity2->LED_State = LED_lamp::Pass;
                else if(t_reporting.result == FAIL)
                    led_intensity2->LED_State = LED_lamp::NoPass;
            }
        }
    }

    if(msg.msgid == MAVLINK_MSG_ID_TEST_GOING_ON)
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
    mav_udp->udp_running(1);
}

void MainWindow::on_pushButton_finish_clicked()
{
    mav_udp->udp_running(3);

    led_distance1->LED_State = LED_lamp::Init;
    led_intensity1->LED_State = LED_lamp::Init;
    led_distance2->LED_State = LED_lamp::Init;
    led_intensity2->LED_State = LED_lamp::Init;

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
