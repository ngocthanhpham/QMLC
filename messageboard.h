#ifndef MESSAGEBOARD_H
#define MESSAGEBOARD_H

#include <QObject>
#include <QQmlListProperty>
#include "message.h"
class MessageBoard : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QQmlListProperty<Message*> mListMsg READ mListMsg WRITE setMListMsg NOTIFY mListMsgChanged)

    QQmlListProperty<Message*> m_mListMsg;

public:
    explicit MessageBoard(QObject *parent = nullptr);
    QQmlListProperty<Message*> mListMsg() const;

signals:
    void mListMsgChanged(QQmlListProperty<Message*> mListMsg);

public slots:
    void setMListMsg(QQmlListProperty<Message*> mListMsg);

    QQmlListProperty<Message*> message();
    void appendMessage(Message*);
    void postMessage();
private:
    Message* m_message;
    QVector<Message*> m_vecMessage;
};


#endif // MESSAGEBOARD_H
