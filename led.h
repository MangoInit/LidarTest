#ifndef LED_H
#define LED_H

#include <QWidget>
#include <QPainter>
#include <QTime>
#include <QtGui>
#include <QIcon>

class LED_lamp : public QWidget
{
    Q_OBJECT
public:
    explicit LED_lamp(QWidget *parent = 0);

    explicit LED_lamp(int x,int y,int r);

    int LED_X, LED_Y, LED_R;

    QColor LED_Pass_Color;
    QColor LED_NoPass_Color;
    QColor LED_Init_Color;
    QColor LED_Color;

    int LED_State;

    enum State
    {
        Init=0, Pass=1, NoPass=2
    };

//    void paintEvent(QPaintEvent *event);

//    void Painter_Circle(LED* led);
//    void Painter_Picture();

signals:

public slots:

    void timeoutslot();
};

#endif // LED_H
