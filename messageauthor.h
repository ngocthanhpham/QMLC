#ifndef MESSAGEAUTHOR_H
#define MESSAGEAUTHOR_H

#include <QObject>

class MessageAuthor : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString mName READ mName WRITE setMName NOTIFY mNameChanged)
    Q_PROPERTY(QString mEmail READ mEmail WRITE setMEmail NOTIFY mEmailChanged)
    QString m_mName;

    QString m_mEmail;

public:
    explicit MessageAuthor(QObject *parent = nullptr);

QString mName() const;

QString mEmail() const;

signals:

void mNameChanged(QString mName);

void mEmailChanged(QString mEmail);

public slots:
void setMName(QString mName);
void setMEmail(QString mEmail);
};

#endif // MESSAGEAUTHOR_H
