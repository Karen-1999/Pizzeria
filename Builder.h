//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_BUILDER_H
#define UNTITLED2_BUILDER_H
#include "Product.h"
#include <iostream>
#include <memory>
// PizzaBuilder
class PizzaBuilder
{
protected:
    Pizza* pizza;
public:
    PizzaBuilder() {}
    virtual ~PizzaBuilder() {}
    Pizza*  GetPizza();

    virtual void makePizza() = 0;
    virtual void makeSize()=0;
    virtual void makeSauce()=0;
    virtual void makeSpecies()=0;

};

#endif //UNTITLED2_BUILDER_H
