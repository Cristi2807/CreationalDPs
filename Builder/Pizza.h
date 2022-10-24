//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_PIZZA_H
#define CREATIONALDPS_PIZZA_H

#include <iostream>

class Pizza {
public:
    void setDough(const std::string &dough);

    void setSauce(const std::string &sauce);

    void setTopping(const std::string &topping);

    void open() const;

private:
    std::string m_dough;
    std::string m_sauce;
    std::string m_topping;
};


#endif //CREATIONALDPS_PIZZA_H
