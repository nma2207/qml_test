#include "model.h"

#include <QRandomGenerator>
#include <QDebug>
#include <algorithm>

Model::Model(QObject *parent)
    :QObject{parent}
    , m_number{0}
{

}

void Model::setNumber(int number)
{
    qDebug() << "Model::setNumber " << number << "\n";
    if (number != m_number)
    {
        m_number = number;
        emit numberChanged();
    }
}

int Model::number() const
{
    qDebug() << "Model::getNumber " << m_number << "\n";
    return m_number;
}

void Model::setRandomNumber()
{
    int newNumber = QRandomGenerator::global()->bounded(static_cast<int>(0), static_cast<int>(100));
    this->setNumber(newNumber);
}

void Model::inc()
{
    setNumber(std::min(m_number+1, 99));
}

void Model::dec()
{
    setNumber(std::max(m_number-1, 0));
}
