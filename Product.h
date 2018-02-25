//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_PRODUCT_H
#define UNTITLED2_PRODUCT_H

#include <string>
#include <iostream>
using namespace std;
// Product Pizza
class Pizza
{
public:
    Pizza() { }
    ~Pizza() { }

    void SetSize(const string& d) ;
    void SetSauce(const string& s) ;
    void SetSpecies(const string& p) ;

    void Status();

private:
    string psize;
    string psauce;
    string pspecies;
};


#endif //UNTITLED2_PRODUCT_H
