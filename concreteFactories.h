//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_CONCRETEFACTORIES_H
#define UNTITLED2_CONCRETEFACTORIES_H

#include "AbstractFactory.h"
#include <iostream>

// concrete Factory
class expressCourier: CourierFactory
{
public:
    virtual ~expressCourier(){ };
    virtual void createCourier(std::string const &time, std::string const &pizza, std::string const &addres) override
    {
        courier courier1(pizza, time, addres);
    }
    virtual void stub(std::string const &time, std::string const &pizza, std::string const &addres)
    {
        std::cout<<"Express Courier got the request, he will be in "<<addres<<" at "<<time<<" with pizza "<<pizza<<std::endl;
    };
};

//concrete Factory
class slowCourier: CourierFactory
{
public:
    virtual ~slowCourier(){ };
    virtual void createCourier(std::string const &time, std::string const &pizza, std::string const &addres) override
    {courier courier1(pizza, time, addres);}
    virtual void stub(std::string const &time, std::string const &pizza, std::string const &addres)
    {
        std::cout<<"Express Courier got the request, he will be in "<<addres<<" at "<<time<<" with pizza "<<pizza<<std::endl;
    };
};

#endif //UNTITLED2_CONCRETEFACTORIES_H
