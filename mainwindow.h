#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mavlink/common_extra_msg/mavlink.h"
#include "mav_udp.h"
#include "led.h"
#include "mythread.h"
#include <QMessageBox>

const int MSG_Start = 1;
const int MSG_End = 3;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    MyThread thread;

    void paintEvent(QPaintEvent *event);

signals:
    void signal_dead();

    void signal_beat();

private slots:
    void on_pushButton_connect_clicked(bool checked);

    void on_pushButton_start_clicked();

    void on_pushButton_finish_clicked();

    void mav_connected();

    void Painter_Circle(LED_lamp *led);

    void show_reporting_mavlink(mavlink_message_t);

    void time_check();

    void beat();

    void on_help_triggered();

private:
    Ui::MainWindow *ui;

    MAV_UDP *mav_udp;

    bool b_connect;

    LED_lamp *led_distance_500;

    LED_lamp *led_distance_1000;

    LED_lamp *led_station_discern;

    LED_lamp *led_distance_120;

    LED_lamp *led_intensity_mode;

    LED_lamp *led_normal_mode;

    QTimer *timer;

    QDateTime datetime;


};

#endif // MAINWINDOW_H
