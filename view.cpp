#include "view.h"
#include <QDebug>
View::View(QObject *parent)
    : QObject{parent}
{
    m_model = std::make_shared<Model>();
    m_controller = std::make_shared<Controller>();

    m_controller->setModel(m_model);

   QObject::connect(m_model.get(), &Model::numberChanged, this, &View::numberChanged);
}

void View::setNumber(int number)
{
    m_controller->setNumber(number);
    qDebug() << "View::setNumber" << number << "\n" ;
    //emit numberChanged();
}

int View::number() const
{
    qDebug() << "View::number" << "\n";
    return m_controller->number();
}

void View::setRandomNumber()
{
    m_controller->setRandomNumber();
    //emit numberChanged();
}

void View::inc()
{
    m_controller->inc();
}

void View::dec()
{
    m_controller->dec();
}
