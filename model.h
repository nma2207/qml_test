#ifndef MODEL_H
#define MODEL_H

#include <QObject>

class Model : public QObject
{
    Q_OBJECT
public:
    explicit Model(QObject *parent = 0);

    void setNumber(int);
    int number() const;
    void setRandomNumber();
    void inc();
    void dec();

signals:
    void numberChanged();

private:
    int m_number;
};

#endif // MODEL_H
