//
// Created by helywin on 2020/11/17.
//

#ifndef TEST_PIMPL_ANIMAL_P_HPP
#define TEST_PIMPL_ANIMAL_P_HPP

#include "Pimpl.hpp"

namespace TEST_PIMPL
{
class Animal;
class AnimalPrivate
{
public:
    Q_DECLARE_PUBLIC(Animal)
    Animal *q_ptr;
    Class mClass = c_Unknown;
    Order mOrder;
    Family mFamily;

    explicit AnimalPrivate(Animal *p);
protected:

};

}
#endif //TEST_PIMPL_ANIMAL_P_HPP
