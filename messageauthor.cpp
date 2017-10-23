#include "messageauthor.h"

MessageAuthor::MessageAuthor(QObject *parent) : QObject(parent)
{

}

QString MessageAuthor::mName() const
{
    return m_mName;
}

QString MessageAuthor::mEmail() const
{
    return m_mEmail;
}

void MessageAuthor::setMName(QString mName)
{
    if (m_mName == mName)
        return;

    m_mName = mName;
    emit mNameChanged(m_mName);
}

void MessageAuthor::setMEmail(QString mEmail)
{
    if (m_mEmail == mEmail)
        return;

    m_mEmail = mEmail;
    emit mEmailChanged(m_mEmail);
}
