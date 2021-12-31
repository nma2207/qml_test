#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>

#include <memory>

#include "model.h"


class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = 0);

    void setNumber(int number);
    int number() const;
    void setRandomNumber();
    void setModel(std::shared_ptr<Model>);
    void inc();
    void dec();

private:
    std::shared_ptr<Model> m_model;
};

#endif // CONTROLLER_H
