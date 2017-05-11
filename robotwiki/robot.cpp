/****************************************************************************
**
** Copyright (C) 2013 Jeffrey Lee.
** All rights reserved.
** Contact: vipjeffreylee@gmail.com
** Please keep the author contact information.
** 2013-10-10
**
****************************************************************************/
#include "robot.h"
#include <QDebug>
#include <QDateTime>
#include <QtNetwork>
#include <QEventLoop>
#include <baiduweather.h>
#include <baidutranslate.h>
Robot::Robot(){
    http=new QNetworkAccessManager(this);
    connect(http,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
}
QString Robot::name(){
    return QString("����С�ٿ�");
}
ReplyMsg Robot::listenandsay(const MsgSender msgSender, const QString &message){
    ReplyMsg replyMsg;
    if(message.at(0)!='#'){
        return replyMsg;
    }
    if(msgSender.groupTXUIN.isEmpty()){
        replyMsg.recTXUIN=msgSender.friendTXUIN;
    }else{
        replyMsg.recTXUIN=msgSender.groupTXUIN;
    }
    QString tmpstr;
    if(message.indexOf("#help")==0){
        replyMsg.content="��������С�ٿƣ����ܸ����㣺\n#�����ˡ�#time\n#���� ������\n#translate �ո�����������";
    }else if(message.indexOf("#������")==0||message.indexOf("#time")==0){
        replyMsg.content=QString("%1 ����ʱ���ǣ�\n%2")
                .arg(msgSender.friendName)
                .arg(QDateTime::currentDateTime().toString("yyyy��MM��dd�� hh��mm��ss��"));
    }else if(message.indexOf("#����")==0){
        tmpstr=message.mid(3).trimmed();
        if(tmpstr.isEmpty()){
            replyMsg.content="������ң���Ҫ���������Ԥ����";
        }else{
            replyMsg.content=BaiduWeather::getWeather(tmpstr);
        }

    }else if(message.indexOf("#translate")==0||message.indexOf("#fy")==0||message.indexOf("#����")==0){
        tmpstr=message.mid(message.indexOf(' ')).trimmed();
        if(tmpstr.isEmpty()){
            replyMsg.content="������ң���Ҫ�Ұ��㷭��ʲô��";
        }else{
            replyMsg.content=Baidutranslate::translate(tmpstr);
        }

    }
    return replyMsg;
}
QString Robot::getWeather(){
    QEventLoop q;
    connect(this, SIGNAL(OnEventLoopQuit()), &q, SLOT(quit()));  //�첽���������
    weather.clear();
    http->get(QNetworkRequest(QUrl(
                                  QString("http://cgi.appx.qq.com/cgi/qqweb/weather/wth/weather.do?retype=1&t=%1")
                                  .arg(QDateTime::currentMSecsSinceEpoch()))));
    q.exec();
    return weather;
}
void Robot::replyFinished(QNetworkReply *reply){
    weather=QString::fromUtf8(reply->readAll());
    reply->deleteLater();
    emit OnEventLoopQuit();
    return;
}
