//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_COOK_H
#define CREATIONALDPS_COOK_H

#include "PizzaBuilder.h"

class Cook {
public:
    void openPizza() const;

    void createPizza(PizzaBuilder *pizzaBuilder);

private:
    PizzaBuilder *m_pizzaBuilder;
};


#endif //CREATIONALDPS_COOK_H
