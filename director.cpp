//
// Created by karen on 25.02.18.
//

#include "director.h"

void Casser::ConstructPizza()
{

    pizzaBuilder->makeSize();
    pizzaBuilder->makeSauce();
    pizzaBuilder->makeSpecies();
}

void Casser::SetPizzaBuilder(PizzaBuilder *b)
{
    pizzaBuilder = b;
}

Pizza* Casser::GetPizza()
{
    return pizzaBuilder->GetPizza();
}
