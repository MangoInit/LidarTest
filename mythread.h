#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QDebug>
#include <QThread>
#include <QDateTime>
#include <QTimer>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

    void stop();

    void beat();

protected:
    void run();

private:
    volatile bool b_stoped;

    QDateTime last;

    QTimer *checkTimer;


signals:
    void dead();

public slots:
    void check();
};

#endif // MYTHREAD_H
