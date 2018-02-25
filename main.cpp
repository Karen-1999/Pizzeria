#include <iostream>
#include <memory>
#include <string>
#include "AbstractFactory.h"
#include "Builder.h"
#include "Client.h"
#include "ConcreteBuilders.h"
#include "concreteFactories.h"
#include "courier.h"
#include "director.h"
#include "Product.h"

using namespace std;

// request of 1 pizza.
int main(int argc, char *argv[]) {

    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();

    Casser visitor;
    PepperoniBuilder pepperoniBuilder;
    visitor.SetPizzaBuilder (&pepperoniBuilder);
    visitor.ConstructPizza();
    shared_ptr<Pizza> pizza = visitor.GetPizza();
    pizza->Status();
    return 0;
}