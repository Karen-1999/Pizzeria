//
// Created by karen on 25.02.18.
//

#include "director.h"

void Casser::ConstructPizza()
{

    pizzaBuilder->makePizza();
    pizzaBuilder->makeSize();
    pizzaBuilder->makeSauce();
    pizzaBuilder->makeSpecies();
}

void Casser::SetPizzaBuilder(PizzaBuilder *b)
{
    pizzaBuilder = b;
}

std::shared_ptr<Pizza> Casser::GetPizza()
{
    return pizzaBuilder->GetPizza();
}
