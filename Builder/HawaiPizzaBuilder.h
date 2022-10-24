//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_HAWAIPIZZABUILDER_H
#define CREATIONALDPS_HAWAIPIZZABUILDER_H

#include "PizzaBuilder.h"

class HawaiPizzaBuilder : public PizzaBuilder {
public:
    ~HawaiPizzaBuilder() override = default;

    void buildDough() override {
        m_pizza->setDough("Hawaiian dough");
    }

    void buildSauce() override {
        m_pizza->setSauce("Hawaiian sauce");
    }

    void buildTopping() override {
        m_pizza->setTopping("Hawaiian topping");
    }
};


#endif //CREATIONALDPS_HAWAIPIZZABUILDER_H
