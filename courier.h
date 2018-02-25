//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_COURIER_H
#define UNTITLED2_COURIER_H

#include <string>
using namespace std;

//product
class courier
{

public:
    courier(string p, string t, string a) : pizza(p), time(t), addres(a){}
private:
    string pizza;
    string time;
    string addres;
};


#endif //UNTITLED2_COURIER_H
