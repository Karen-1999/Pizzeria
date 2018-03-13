//
// Created by karen on 25.02.18.
//

#include "ConcreteBuilders.h"


void PepperoniBuilder::makeSize() { pizza->SetSize("small"); }

void PepperoniBuilder::makeSauce() { pizza->SetSauce("mild"); }

void PepperoniBuilder::makeSpecies() { pizza->SetSpecies("apple and eggs"); }

void BeconBuilder::makeSize() { pizza->SetSize("large"); }

void BeconBuilder::makeSauce() { pizza->SetSauce("hot"); }

void BeconBuilder::makeSpecies() { pizza->SetSpecies("mashrooms and fruits"); }

void DodoBuilder::makeSize() { pizza->SetSize("middle"); }

void DodoBuilder::makeSauce() { pizza->SetSauce("cheese"); }

void DodoBuilder::makeSpecies() { pizza->SetSpecies("Meatspecies"); }


void DodoBuilder::makePizza()
{
    pizza = new Dodo;
}

void PepperoniBuilder::makePizza()
{
    pizza = new Pepperoni;
}

void BeconBuilder::makePizza()
{
    pizza = new Becon;
}
