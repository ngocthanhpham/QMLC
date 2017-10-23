#ifndef MESSAGEBODY_H
#define MESSAGEBODY_H

#include <QObject>

class MessageBody : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString mContent READ mContent WRITE setMContent NOTIFY mContentChanged)
    QString m_mContent;

public:
    explicit MessageBody(QObject *parent = nullptr);

    QString mContent() const
    {
        return m_mContent;
    }

signals:

    void mContentChanged(QString mContent);

public slots:
    void setMContent(QString mContent)
    {
        if (m_mContent == mContent)
            return;

        m_mContent = mContent;
        emit mContentChanged(m_mContent);
    }
};

#endif // MESSAGEBODY_H
