//
// Created by helywin on 2020/11/17.
//

#ifndef TEST_PIMPL_ANIMAL_HPP
#define TEST_PIMPL_ANIMAL_HPP

#include <QObject>
#include "Pimpl.hpp"

namespace TEST_PIMPL
{

class AnimalPrivate;
class Animal : public QObject
{
Q_OBJECT
public:
    explicit Animal(QObject *parent);
    ~Animal() override;
    Class getClass() const;
    Order getOrder() const;
    Family getFamily() const;

protected:
    explicit Animal(AnimalPrivate &dd, QObject *parent = nullptr);

    Q_DECLARE_PRIVATE(Animal)
    Q_DISABLE_COPY(Animal)
    QScopedPointer<AnimalPrivate> d_ptr;
};

}


#endif //TEST_PIMPL_ANIMAL_HPP
