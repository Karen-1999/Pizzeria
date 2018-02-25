//
// Created by karen on 25.02.18.
//

#include "Builder.h"
void PizzaBuilder::makePizza()
{
    pizza.reset (new Pizza);
}

std::shared_ptr<Pizza> PizzaBuilder::GetPizza(){
    return pizza; }
