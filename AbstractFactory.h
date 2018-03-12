//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_ABSTRACTFACTORY_H
#define UNTITLED2_ABSTRACTFACTORY_H

#include "courier.h"
#include <string>
using namespace std;

//abstractFactory
class CourierFactory
{
public:
    virtual    ~CourierFactory() {}
    virtual void createCourier(string const &time, string const &pizza,string const &addres) = 0;

};


#endif //UNTITLED2_ABSTRACTFACTORY_H
