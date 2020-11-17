//
// Created by helywin on 2020/11/17.
//

#ifndef TEST_PIMPL_BIRD_HPP
#define TEST_PIMPL_BIRD_HPP

#include <QObject>
#include "Animal.hpp"

namespace TEST_PIMPL
{

class BirdPrivate;
class Bird : public Animal
{
Q_OBJECT
public:
    explicit Bird(QObject *parent = nullptr);
    void setFamily(Family family);

protected:
    explicit Bird(BirdPrivate &dd, QObject *parent = nullptr);

private:
    Q_DECLARE_PRIVATE(Bird)
    Q_DISABLE_COPY(Bird)
};

}


#endif //TEST_PIMPL_BIRD_HPP
