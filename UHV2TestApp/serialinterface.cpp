#include "serialinterface.h"
#include <QMutex>
#include <QThread>
#include "binaryprotocol.h"

#define BUFFERFORWRITENOW 6


SerialInterface::SerialInterface(const QString &PortName):
    mPortName(* new QString (PortName))
{
    mIsConnected = false;
    mTimeOut4Buffer = 300;
    mReadBufferSize = 256;
        connect(this,&SerialInterface::startTrasmission,this,&SerialInterface::doTransmission);
        //ReconfigSerialPort(PortName);
}

SerialInterface::~SerialInterface()
{


}

void SerialInterface::ReconfigSerialPort(const QString &PortName)
{

           mPortName = PortName;
            doTransmission();
}

void SerialInterface::writeNow(const QByteArray &dataToWrite)
{
    commandList.append(dataToWrite);
    emit startTrasmission();
}

void SerialInterface::readNow()
{

}

void SerialInterface::doTransmission()
{
    static QSerialPort  mSerialPort;

    if( QString::compare(mSerialPort.portName(), mPortName, Qt::CaseSensitive) != 0)
    {
        mSerialPort.close();

        mSerialPort.setReadBufferSize(mReadBufferSize); //NEED Discussed
        mSerialPort.setDataBits(QSerialPort::Data8);
        mSerialPort.setBaudRate(QSerialPort::Baud9600);
        mSerialPort.setStopBits(QSerialPort::OneStop);
        mSerialPort.setParity(QSerialPort::NoParity);   //NEED CHECK pg98
        mSerialPort.setFlowControl(QSerialPort::NoFlowControl);


        mSerialPort.setPortName(mPortName);
        //Validity of Connection Should Add Here
        if (mSerialPort.open(QIODevice::ReadWrite))
        {
            mIsConnected = true;
            emit isConnected();
        }

        else
        {
            mIsConnected = false;
            emit isNotConnected();
            return;
        }
    }

    QMutex  mutex;
    QByteArray data;

    if(mIsConnected)
    {
        mutex.lock();
        while(commandList.size() != 0)
        {
            mSerialPort.write(commandList.at(0));
            qDebug() << "sending: " << commandList.at(0).toHex() << endl;

            //QThread::msleep(10);
                if(mSerialPort.waitForReadyRead(mTimeOut4Buffer))
                {
                    data.clear();
                    data = mSerialPort.readAll();
                    while(mSerialPort.waitForReadyRead(mTimeOut4Buffer))
                    {
                        data+= mSerialPort.readAll();
                    }
                    qDebug() << "emit sigReadready from transmission thread" << endl;

                    emit sigReadready(data);
                    QThread::msleep(5);

                }
                commandList.removeAt(0);


        }
        mutex.unlock();
    }

}
