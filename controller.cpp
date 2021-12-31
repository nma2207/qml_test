#include "controller.h"

Controller::Controller(QObject *parent)
    : QObject{parent}
{

}

void Controller::setNumber(int number)
{
    m_model->setNumber(number);
}

int Controller::number() const
{
    return m_model->number();
}

void Controller::setRandomNumber()
{
    m_model->setRandomNumber();
}

void Controller::setModel(std::shared_ptr<Model> model)
{
    m_model = model;
}

void Controller::inc()
{
    m_model->inc();
}
void Controller::dec()
{
    m_model->dec();
}
