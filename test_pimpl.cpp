//
// Created by helywin on 2020/11/17.
//

#include <QCoreApplication>
#include "Dog.hpp"

using namespace TEST_PIMPL;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Dog dog;
    dog.sitDown();
    return QCoreApplication::exec();
}
