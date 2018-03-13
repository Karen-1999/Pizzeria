//
// Created by karen on 13.03.18.
//

#ifndef UNTITLED2_TEST_H
#define UNTITLED2_TEST_H
#include <gtest/gtest.h>
#include "director.h"
#include "ConcreteBuilders.h"

TEST(buildingTest, firstTest) {
    Casser Karen;
    DodoBuilder* dodoBuilder = new DodoBuilder();
    Karen.SetPizzaBuilder(dodoBuilder);
    Karen.ConstructPizza();
    auto pizza = Karen.GetPizza();
    EXPECT_EQ(pizza->GetSauce(), "cheese");
    EXPECT_EQ(pizza->GetSize(), "middle");
    EXPECT_EQ(pizza->GetSpecies(), "Meatspecies");
    delete dodoBuilder;
}

#endif //UNTITLED2_TEST_H


