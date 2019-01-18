#include "mythread.h"

MyThread::MyThread(QObject *parent) : QThread(parent)
{
    b_stoped = false;
}

void MyThread::stop()
{
    b_stoped = true;
    delete checkTimer;
}

void MyThread::beat()
{
    if(!checkTimer->isActive())
        checkTimer->start();
    last = QDateTime::currentDateTime();
}

void MyThread::run()
{
//    qreal i=0;
    while(!b_stoped)
    {
//        qDebug() << QString("in my thread:%1").arg(i++);
//        msleep(1000);
//        checkTimer = new QTimer(this);
//        checkTimer->setInterval(3);
//        last = QDateTime::currentDateTime();
//        connect(checkTimer, SIGNAL(timeout()), this, SLOT(check()));
    }
    b_stoped = false;
}

void MyThread::check()
{
    if(last.secsTo(QDateTime::currentDateTime()) >= 30)
    {
        checkTimer->stop();
        emit dead();
    }
}

