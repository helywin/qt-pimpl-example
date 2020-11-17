//
// Created by helywin on 2020/11/17.
//

#include "Bird.hpp"
#include "Animal_p.hpp"

namespace TEST_PIMPL
{

class BirdPrivate : public AnimalPrivate
{
public:
    Q_DECLARE_PUBLIC(Bird)

    explicit BirdPrivate(Bird *p);
};

BirdPrivate::BirdPrivate(Bird *p) :
        AnimalPrivate(p)
{
    Q_Q(Bird);
    mClass = c_Aves;
}

Bird::Bird(QObject *parent) :
        Animal(*(new BirdPrivate(this)), parent)
{}

Bird::Bird(BirdPrivate &dd, QObject *parent) :
        Animal(dd, parent)
{

}

void Bird::setFamily(Family family)
{
    Q_D(Bird);
    d->mFamily = family;
}

}