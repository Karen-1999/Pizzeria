//
// Created by karen on 25.02.18.
//

#include "Product.h"

std::string Pizza::GetSize() { return psize; }
std::string Pizza::GetSauce() { return psauce; }
std::string Pizza::GetSpecies() { return pspecies; }

void Pizza::SetSize(const std::string d) { psize = d; }
void Pizza::SetSauce(const std::string s) { psauce = s; }
void Pizza::SetSpecies(const std::string p) { pspecies = p; }

void Pizza::Status()
{
    std::cout << "   Dear visitor !" << std::endl
         << "Pizza size is " << GetSize()
         << ", sauce is " << GetSauce()
         << " and species are " << GetSpecies()
         << " ! " << std::endl << "   Bon apetite !!!"<<std::endl;
}
