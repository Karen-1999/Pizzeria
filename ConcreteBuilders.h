//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_CONCRETEBUILDERS_H
#define UNTITLED2_CONCRETEBUILDERS_H

#include "Product.h"
#include <iostream>
#include "Builder.h"

// ConcreteBuilder1
class PepperoniBuilder : public PizzaBuilder
{
public:
    PepperoniBuilder() : PizzaBuilder() {}
    ~PepperoniBuilder(){}
    void makePizza();
    void makeSize() ;
    void makeSauce() ;
    void makeSpecies() ;
};
// ConcreteBuilder2
class BeconBuilder : public PizzaBuilder
{
public:
    BeconBuilder() : PizzaBuilder() {}
    ~BeconBuilder() {}

    void makePizza();
    void makeSize() ;
    void makeSauce() ;
    void makeSpecies() ;
};

//concrete Builder3
class DodoBuilder : public PizzaBuilder
{
public:
    DodoBuilder() : PizzaBuilder() {}
    ~DodoBuilder() {}

    void makePizza();
    void makeSize() ;
    void makeSauce() ;
    void makeSpecies() ;

};

#endif //UNTITLED2_CONCRETEBUILDERS_H
