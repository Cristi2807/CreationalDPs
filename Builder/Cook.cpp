//
// Created by cristi on 10/24/22.
//

#include "Cook.h"

void Cook::openPizza() const {
    m_pizzaBuilder->getPizza()->open();
}

void Cook::createPizza(PizzaBuilder *pizzaBuilder) {
    m_pizzaBuilder = pizzaBuilder;
    m_pizzaBuilder->createNewPizza();
    m_pizzaBuilder->buildDough();
    m_pizzaBuilder->buildSauce();
    m_pizzaBuilder->buildTopping();
}
