#include "mav_udp.h"
#include <QTcpSocket>
MAV_UDP::MAV_UDP(QObject *parent) : QObject(parent)
{
    udp_socket = new QUdpSocket;
    udp_socket->bind(45455,QUdpSocket::ShareAddress);

    is_connect_ok = false;

    connect(udp_socket,SIGNAL(readyRead()),this,SLOT(readPendingDatagrams()));
    connect(this,SIGNAL(receive_a_mavlink(mavlink_message_t)),this,SLOT(parse_a_mavlink(mavlink_message_t)));

    QTcpSocket tcp_socket;
    tcp_socket.setSocketOption(QAbstractSocket::KeepAliveOption, true);
}


void MAV_UDP::send_mav_msg(const mavlink_message_t &msg)
{
//    qDebug()<<"send mavlink:"<<msg.sysid<<msg.compid<<msg.msgid<<msg.payload64;
    int len = mavlink_msg_to_send_buffer(sendbuffer,&msg);
    udp_socket->writeDatagram((char*)sendbuffer,len,lidar_addr,lidar_port);

}

void MAV_UDP::udp_item_setting(TEST_ITEM item)
{
    mavlink_message_t msg_item_setting;
    mavlink_test_item_setting_t item_setting;
    item_setting.code = Narwel_pwd;
    item_setting.item = item;
    mavlink_msg_test_item_setting_encode(1,1,&msg_item_setting,&item_setting);
    send_mav_msg(msg_item_setting);
    qDebug()<<"send a item setting mavlink, number is"<<item;
}

void MAV_UDP::udp_running(int code)
{
    mavlink_message_t msg_running;
    mavlink_test_running_t running;
//    running.code = 0xa5;
    running.code = code;
    mavlink_msg_test_running_encode(1,1,&msg_running,&running);
    send_mav_msg(msg_running);
}

void MAV_UDP::udp_going_on()
{
    mavlink_message_t msg_going_on;
    mavlink_test_going_on_t going_on;
    going_on.code = 0xa5;
    mavlink_msg_test_going_on_encode(1,1,&msg_going_on,&going_on);
    send_mav_msg(msg_going_on);
}

void MAV_UDP::readPendingDatagrams()
{
    while(udp_socket->hasPendingDatagrams())
    {
        QByteArray receive_buffer;
        receive_buffer.resize(udp_socket->pendingDatagramSize());
        udp_socket->readDatagram(receive_buffer.data(),receive_buffer.size(),&lidar_addr,&lidar_port);

        //shake hands
        if(is_connect_ok == false)
        {
            if(strcmp(receive_buffer,"Narwel_Robot")==0)
            {
                QByteArray send_buffer;
                send_buffer = "Narwel_Server+";
                send_buffer.append(getIP().toLatin1());
                qDebug()<<"sender's host and prot: "<<lidar_addr.toString()<<lidar_port;
                qDebug()<<"what's I send to Robot:"<<send_buffer;
                udp_socket->writeDatagram(send_buffer,lidar_addr,lidar_port);
            }
            if(strcmp(receive_buffer,"Narwel_Ready")==0)
            {
                is_connect_ok = true;
                qDebug()<<"Start Lidar Test.";
                emit signal_connected();
            }
        }
        //receive mavlink
        else
        {
            if(receive_buffer.size()>0)
            {
                mavlink_message_t msg;
                mavlink_status_t status;
                for(int i=0;i<receive_buffer.length();i++)
                {
                    int stas = mavlink_parse_char(1,receive_buffer.at(i),&msg,&status);
                    if(stas == MAVLINK_FRAMING_OK)
                    {
//                        qDebug()<<"Receive mavlink: "<<msg.sysid<<msg.compid<<msg.msgid<<msg.payload64;
                        emit receive_a_mavlink(msg);
                    }
                }
            }
        }
    }
}

void MAV_UDP::parse_a_mavlink(const mavlink_message_t &msg)
{
    if(msg.msgid == MAVLINK_MSG_ID_TEST_REPORTING)
    {
        mavlink_test_reporting_t reporting;
        mavlink_msg_test_reporting_decode(&msg,&reporting);
//        qDebug()<<"this is a reporting mavlink "<<reporting.contant<<reporting.result<<reporting.state;
    }
}

QString MAV_UDP::getIP()  //获取ip地址
{
    QList<QHostAddress> list = QNetworkInterface::allAddresses();
    foreach (QHostAddress address, list)
    {
       if(address.protocol() == QAbstractSocket::IPv4Protocol)
       {
            if(address.toString().contains("192.168")==false)
                continue;
            return address.toString();
       }
    }
    return "IP Fail!";
}
