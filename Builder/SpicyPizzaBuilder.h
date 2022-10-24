//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_SPICYPIZZABUILDER_H
#define CREATIONALDPS_SPICYPIZZABUILDER_H

#include "PizzaBuilder.h"

class SpicyPizzaBuilder : public PizzaBuilder {
public:
    ~SpicyPizzaBuilder() override = default;

    void buildDough() override {
        m_pizza->setDough("Spicy dough");
    }

    void buildSauce() override {
        m_pizza->setSauce("Spicy sauce");
    }

    void buildTopping() override {
        m_pizza->setTopping("Spicy topping");
    }
};


#endif //CREATIONALDPS_SPICYPIZZABUILDER_H
