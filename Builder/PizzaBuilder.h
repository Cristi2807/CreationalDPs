//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_PIZZABUILDER_H
#define CREATIONALDPS_PIZZABUILDER_H

#include "Pizza.h"
#include <memory>

class PizzaBuilder {

public:
    virtual ~PizzaBuilder() = default;

    void createNewPizza() {
        m_pizza = std::make_unique<Pizza>();
    }

    Pizza *getPizza() {
        return m_pizza.release();
    }

    virtual void buildDough() = 0;

    virtual void buildSauce() = 0;

    virtual void buildTopping() = 0;

protected:
    std::unique_ptr<Pizza> m_pizza;
};


#endif //CREATIONALDPS_PIZZABUILDER_H
