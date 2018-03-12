//
// Created by karen on 25.02.18.
//

#include "Builder.h"

void PizzaBuilder::makePizza(std::string Name)
{
    if(Name == "Pepperoni")
        pizza = new Pepperoni;
    if(Name == "Becon")
        pizza = new Pepperoni;
    if(Name == "Dodo")
        pizza = new Dodo;
}

Pizza* PizzaBuilder::GetPizza(){
    return pizza; }
