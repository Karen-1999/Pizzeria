//
// Created by karen on 25.02.18.
//

#include "Product.h"

void Pizza::SetSize(const string& d) { psize = d; }
void Pizza::SetSauce(const string& s) { psauce = s; }
void Pizza::SetSpecies(const string& p) { pspecies = p; }

void Pizza::Status()
{
    cout << "   Dear visitor !" << endl
         << "Pizza size is " << psize
         << ", sauce is " << psauce
         << " and species are " << pspecies
         << " ! " << endl << "   Bon apetite !!!"<<endl;
}