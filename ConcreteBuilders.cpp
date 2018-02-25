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

void AnyBuilder::makeSize(string s) { pizza->SetSize(s); }

void AnyBuilder::makeSauce(string s) { pizza->SetSauce(s); }

void AnyBuilder::makeSpecies(string s) { pizza->SetSpecies(s); }

void AnyBuilder::makePizza(string _size, string _sauce, string _species)
{
    makeSize(_size);
    makeSauce(_sauce);
    makeSpecies(_species);
}