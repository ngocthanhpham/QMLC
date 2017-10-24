#ifndef MESSAGEBOARD_H
#define MESSAGEBOARD_H

#include <QObject>
#include <QQmlListProperty>
#include "message.h"
class MessageBoard : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Message> mListMsg READ mListMsg WRITE setMListMsg NOTIFY mListMsgChanged)


public:
    explicit MessageBoard(QObject *parent = nullptr);
    QQmlListProperty<Message> mListMsg();
private:
    static void appendMessage(QQmlListProperty<Message> *vector, Message* msg);
    static int countMessage(QQmlListProperty<Message>*);
    static Message* message(QQmlListProperty<Message>*, int);
    static void clearMessage(QQmlListProperty<Message>*);

signals:
    void mListMsgChanged(QQmlListProperty<Message> mListMsg);

public slots:
    void setMListMsg(QQmlListProperty<Message> mListMsg);
    void insertElement();

//    QQmlListProperty<Message*> message();
private:
    QQmlListProperty<Message*> m_mListMsg;
    Message* m_message;
    QVector<Message*> m_vecMessage;
};


#endif // MESSAGEBOARD_H
