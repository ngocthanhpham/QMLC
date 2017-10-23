#include "message.h"

Message::Message(QObject *parent) : QObject(parent)
{

}

MessageAuthor *Message::mAuthor() const
{
    return m_mAuthor;
}

MessageBody *Message::mBody() const
{
    return m_mBody;
}

void Message::setMAuthor(MessageAuthor *mAuthor)
{
    if (m_mAuthor == mAuthor)
        return;

    m_mAuthor = mAuthor;
    emit mAuthorChanged(m_mAuthor);
}

void Message::setMBody(MessageBody *mBody)
{
    if (m_mBody == mBody)
        return;

    m_mBody = mBody;
    emit mBodyChanged(m_mBody);
}
