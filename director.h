//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_DIRECTOR_H
#define UNTITLED2_DIRECTOR_H

#include <iostream>
#include "Builder.h"
#include "Product.h"
using namespace std;
// Director

class Casser
{
private:
    PizzaBuilder* pizzaBuilder;
public:
    Casser() : pizzaBuilder(NULL) {}
    ~Casser() { }

    void SetPizzaBuilder(PizzaBuilder* b);
    std::shared_ptr<Pizza> GetPizza();
    void ConstructPizza();
};

#endif //UNTITLED2_DIRECTOR_H
