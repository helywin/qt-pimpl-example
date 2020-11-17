//
// Created by helywin on 2020/11/17.
//

#include <QDebug>
#include "Dog.hpp"
#include "Animal_p.hpp"

namespace TEST_PIMPL
{

class DogPrivate : AnimalPrivate
{
public:
    Q_DECLARE_PUBLIC(Dog)

    explicit DogPrivate(Dog *p);
    void _q_sitDownMethod(int pos);
};

DogPrivate::DogPrivate(Dog *p) :
        AnimalPrivate(p)
{

}

void DogPrivate::_q_sitDownMethod(int pos)
{
    qDebug() << "sit down";
}

Dog::Dog(QObject *parent) :
        Animal(*(new DogPrivate(this)), parent)
{
    connect(this, SIGNAL(void sitDownSignal(int pos)), SLOT(void _q_sitDownMethod(int pos)));
}

Dog::~Dog()
{

}

void Dog::sitDown()
{
    emit setDownSignal(1);
}
}

#include "moc_Dog.cpp"