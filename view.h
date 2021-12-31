#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include "model.h"
#include "controller.h"
#include <memory>

class View : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int number READ number WRITE setNumber NOTIFY numberChanged)
public:
    explicit View(QObject *parent = nullptr);


    int number() const;
    Q_INVOKABLE void setRandomNumber();
    void setNumber(int number);
    Q_INVOKABLE void inc();
    Q_INVOKABLE void dec();
    //void setModel(std::shared_ptr<Model>);
    //void setController( std::shared_ptr<Controller>);
signals:
    void numberChanged();




private:
    std::shared_ptr<Model> m_model;
    std::shared_ptr<Controller> m_controller;

};

#endif // VIEW_H
