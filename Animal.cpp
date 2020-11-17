//
// Created by helywin on 2020/11/17.
//

#include "Animal.hpp"
#include "Animal_p.hpp"

namespace TEST_PIMPL
{

AnimalPrivate::AnimalPrivate(Animal *p) :
        q_ptr(p)
{

}

Animal::Animal(QObject *parent) :
        QObject(parent),
        d_ptr(new AnimalPrivate(this))
{

}

Animal::~Animal()
{

}

Animal::Animal(AnimalPrivate &dd, QObject *parent) :
        QObject(parent),
        d_ptr(&dd)
{

}

Class Animal::getClass() const
{
    Q_D(const Animal);
    return d->mClass;
}

Order Animal::getOrder() const
{
    Q_D(const Animal);
    return d->mOrder;
}

Family Animal::getFamily() const
{
    Q_D(const Animal);
    return d->mFamily;
}

}