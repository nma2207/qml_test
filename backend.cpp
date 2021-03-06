#include "backend.h"

Backend::Backend(QObject *parent) :
    QObject(parent)
{
}

QString Backend::userName()
{
    return m_userName;
}

void Backend::setUserName(const QString &userName)
{
    if (userName == m_userName)
        return;

    m_userName = userName;
    emit userNameChanged();
}
