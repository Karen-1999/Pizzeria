//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_CONCRETEBUILDERS_H
#define UNTITLED2_CONCRETEBUILDERS_H

#include "Product.h"
#include <iostream>
#include "Builder.h"

using namespace std;
// ConcreteBuilder1
class PepperoniBuilder : public PizzaBuilder
{
public:
    PepperoniBuilder() : PizzaBuilder() {}
    ~PepperoniBuilder(){}

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

    void makeSize() ;
    void makeSauce() ;
    void makeSpecies() ;
};

//concrete Builder3
class AnyBuilder : public PizzaBuilder
{
public:
    AnyBuilder() : PizzaBuilder() {}
    ~AnyBuilder() {}
    void makePizza(string _size, string _sauce, string _species);
    void makeSize(string s) ;
    void makeSauce(string s) ;
    void makeSpecies(string s) ;

};

#endif //UNTITLED2_CONCRETEBUILDERS_H
