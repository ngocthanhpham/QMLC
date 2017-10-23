#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include "messagebody.h"
#include "messageauthor.h"
#include <QString>
#include <QVector>
class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(MessageAuthor* mAuthor READ mAuthor WRITE setMAuthor NOTIFY mAuthorChanged)
    Q_PROPERTY(MessageBody* mBody READ mBody WRITE setMBody NOTIFY mBodyChanged)
private:
    MessageAuthor* m_mAuthor;

    MessageBody* m_mBody;

public:
    Message(QObject *parent = nullptr);

    MessageAuthor *mAuthor() const;

    MessageBody* mBody() const;

signals:

    void mAuthorChanged(MessageAuthor* mAuthor);

    void mBodyChanged(MessageBody* mBody);

public slots:
    void setMAuthor(MessageAuthor* mAuthor);
    void setMBody(MessageBody* mBody);
};

#endif // MESSAGE_H
