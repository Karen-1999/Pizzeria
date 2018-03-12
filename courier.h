//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_COURIER_H
#define UNTITLED2_COURIER_H

#include <string>

//product
class courier
{

public:
    courier(std::string p, std::string t, std::string a) : pizza(p), time(t), addres(a){}
private:
    std::string pizza;
    std::string time;
    std::string addres;
};


#endif //UNTITLED2_COURIER_H
