#include "messageboard.h"
#include <QVector>
MessageBoard::MessageBoard(QObject *parent) : QObject(parent)
{

}

QQmlListProperty<Message> MessageBoard::mListMsg()
{
    return QQmlListProperty<Message>(this,this,&MessageBoard::appendMessage,
                                     &MessageBoard::countMessage,
                                     &MessageBoard::message,
                                     &MessageBoard::clearMessage);
}

//QQmlListProperty<Message *> MessageBoard::message()
//{

//}

void MessageBoard::setMListMsg(QQmlListProperty<Message> mListMsg)
{

}

void MessageBoard::insertElement()
{
    Message* msg = new Message();
    QQmlListProperty<Message> vecMessage = mListMsg();

    appendMessage(&vecMessage,msg);
}

void MessageBoard::appendMessage(QQmlListProperty<Message> *vector, Message* msg)
{
    MessageBoard* msgBoard = qobject_cast<MessageBoard*>(vector->object);
    msgBoard->m_vecMessage.append(msg);
}

int MessageBoard::countMessage(QQmlListProperty<Message> *vector){
    MessageBoard* msgBoard = qobject_cast<MessageBoard*>(vector->object);
    msgBoard->m_vecMessage.count();
}

Message* MessageBoard::message(QQmlListProperty<Message> *vector, int index){
    MessageBoard* msgBoard = qobject_cast<MessageBoard*>(vector->object);
    return msgBoard->m_vecMessage.at(index);

}

void MessageBoard::clearMessage(QQmlListProperty<Message> *vector){
    MessageBoard* msgBoard = qobject_cast<MessageBoard*>(vector->object);
    msgBoard->m_vecMessage.clear();
}
