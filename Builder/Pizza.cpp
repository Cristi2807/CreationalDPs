//
// Created by cristi on 10/24/22.
//

#include "Pizza.h"

void Pizza::setDough(const std::string &dough) {
    m_dough = dough;
}

void Pizza::setSauce(const std::string &sauce) {
    m_sauce = sauce;
}

void Pizza::setTopping(const std::string &topping) {
    m_topping = topping;
}

void Pizza::open() const {
    std::cout << "The Pizza has " <<
              m_dough << "," <<
              m_sauce << "," <<
              m_topping << "." <<
              std::endl;
}