#include "led.h"

LED_lamp::LED_lamp(QWidget *parent) : QWidget(parent)
{

}

LED_lamp::LED_lamp(int x,int y,int r)
{
    LED_X = x;
    LED_Y = y;
    LED_R = r;
    LED_Pass_Color = Qt::green;
    LED_NoPass_Color = Qt::red;
    LED_Init_Color = Qt::darkGray;
    LED_State = Init;
    LED_Color = LED_Init_Color;

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeoutslot()));
    timer->start(200);
}

void LED_lamp::timeoutslot()
{
    if(LED_State == Pass)
    {
        LED_Color = LED_Pass_Color;
    }
    if(LED_State == NoPass)
    {
        LED_Color = LED_NoPass_Color;
    }
    if(LED_State == Init)
    {
        LED_Color = LED_Init_Color;
    }
}


//void LED::Painter_Circle(LED *led)
//{
//    QPainter painter(this);
//    QPen pen(Qt::black,2);
//    painter.setPen(pen);
//    painter.setBrush(led->LED_Color);
//    painter.drawEllipse(led->LED_X,led->LED_Y,led->LED_R,led->LED_R);
//    update();
//}

//void LED::paintEvent(QPaintEvent *event)
//{
//    Q_UNUSED(event);

//    Painter_Circle(this);
//    Painter_Picture();

//}
