//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_PRODUCT_H
#define UNTITLED2_PRODUCT_H

#include <string>
#include <iostream>
#include "ConcreteBuilders.h"

// Product Pizza
class Pizza
{
    friend class PepperoniBuilder;
    friend class DodoBuilder;
    friend class BeconBuilder;
public:
    Pizza() { }
    ~Pizza() { }

    std::string GetSize() ;
    std::string GetSauce() ;
    std::string GetSpecies() ;

    virtual void Status();

private:
    void SetSize(std::string d) ;
    void SetSauce(std::string s) ;
    void SetSpecies(std::string p) ;
    std::string psize;
    std::string psauce;
    std::string pspecies;
};

class Pepperoni : public Pizza{
public:
    Pepperoni() : Pizza() {}
    ~Pepperoni(){}

    void Status()
    {
        std::cout << "   Dear visitor !" << std::endl
                  << "Pizza size is " << GetSize()
                  << ", sauce is " << GetSauce()
                  << " and species are " << GetSpecies()
                  << " ! " << std::endl << "   Bon apetite !!!"<<std::endl;
    }
};


class Becon : public Pizza{
public:
    Becon() : Pizza() {}
    ~Becon(){}

    void Status()
    {
        std::cout << "   Dear visitor !" << std::endl
                  << "Pizza size is " << GetSize()
                  << ", sauce is " << GetSauce()
                  << " and species are " << GetSpecies()
                  << " ! " << std::endl << "   Bon apetite !!!"<<std::endl;
    }
};

class Dodo : public Pizza{
public:
    Dodo() : Pizza() {}
    ~Dodo(){}

    void Status()
    {
        std::cout << "   Dear visitor !" << std::endl
                  << "Pizza size is " << GetSize()
                  << ", sauce is " << GetSauce()
                  << " and species are " << GetSpecies()
                  << " ! " << std::endl << "   Bon apetite !!!"<<std::endl;
    }
};
#endif //UNTITLED2_PRODUCT_H
