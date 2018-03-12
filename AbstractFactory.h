//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_ABSTRACTFACTORY_H
#define UNTITLED2_ABSTRACTFACTORY_H

#include "courier.h"
#include <string>

//abstractFactory
class CourierFactory
{
public:
    virtual    ~CourierFactory() {}
    virtual void createCourier(std::string const &time, std::string const &pizza,std::string const &addres) = 0;

};


#endif //UNTITLED2_ABSTRACTFACTORY_H
