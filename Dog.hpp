//
// Created by helywin on 2020/11/17.
//

#ifndef TEST_PIMPL_DOG_HPP
#define TEST_PIMPL_DOG_HPP

#include "Animal.hpp"

namespace TEST_PIMPL
{

class DogPrivate;
class Dog : public Animal
{
Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);
    ~Dog() override;
    void sitDown();

signals:
    void sitDownSignal(int pos);

private:
    Q_DECLARE_PRIVATE(Dog)
    Q_DISABLE_COPY(Dog)
    Q_PRIVATE_SLOT(d_func(), void _q_sitDownMethod(int pos))
};

}


#endif //TEST_PIMPL_DOG_HPP
