//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_BUILDER_H
#define UNTITLED2_BUILDER_H
#include "Product.h"
#include <iostream>
#include <memory>
using namespace std;
// Abstract PizzaBuilder
class PizzaBuilder
{
protected:
    std::shared_ptr<Pizza> pizza;
public:
    PizzaBuilder() {}
    virtual ~PizzaBuilder() {}
    std::shared_ptr<Pizza>  GetPizza();

    void makePizza();
    virtual void makeSize()=0;
    virtual void makeSauce()=0;
    virtual void makeSpecies()=0;

};

#endif //UNTITLED2_BUILDER_H
