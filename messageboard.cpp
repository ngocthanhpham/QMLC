#include "messageboard.h"
#include <QVector>
MessageBoard::MessageBoard(QObject *parent) : QObject(parent)
{

}

QQmlListProperty<Message *> MessageBoard::mListMsg() const
{
    return m_mListMsg;
}

QQmlListProperty<Message *> MessageBoard::message()
{

}

void MessageBoard::appendMessage(Message * message)
{
    m_vecMessage.append(message);
}

void MessageBoard::postMessage()
{

}

void MessageBoard::setMListMsg(QQmlListProperty<Message *> mListMsg)
{

}
