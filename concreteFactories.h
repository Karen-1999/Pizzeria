//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_CONCRETEFACTORIES_H
#define UNTITLED2_CONCRETEFACTORIES_H

#include "AbstractFactory.h"
#include <iostream>
using namespace std;

// concrete Factory
class expressCourier: CourierFactory
{
public:
    virtual ~expressCourier(){ };
    virtual void createCourier(string const &time, string const &pizza, string const &addres) override
    {
        courier courier1(pizza, time, addres);
    }
    virtual void stub(string const &time, string const &pizza, string const &addres)
    {
        cout<<"Express Courier got the request, he will be in "<<address<<" at "<<time<<" with pizza "<<pizza<<endl;
    };
};

//concrete Factory
class slowCourier: CourierFactory
{
public:
    virtual ~slowCourier(){ };
    virtual void createCourier(string const &time, string const &pizza, string const &addres) override
    {courier courier1(pizza, time, addres);}
    virtual void stub(string const &time, string const &pizza, string const &addres)
    {
        cout<<"Express Courier got the request, he will be in "<<address<<" at "<<time<<" with pizza "<<pizza<<endl;
    };
};

#endif //UNTITLED2_CONCRETEFACTORIES_H
