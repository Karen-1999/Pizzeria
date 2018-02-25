//
// Created by karen on 25.02.18.
//

#ifndef UNTITLED2_CLIENT_H
#define UNTITLED2_CLIENT_H

#include <iostream>
#include "courier.h"
using namespace std;

// Client
class Client
{

private:
    courier cour;
public:
    Client(string address, string tim, string pizza):
            cour(pizza, tim, address)
    {
    }
    void stub();
};


#endif //UNTITLED2_CLIENT_H
