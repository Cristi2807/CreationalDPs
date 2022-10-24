//
// Created by cristi on 10/24/22.
//

#include <string>
#include "singleton.h"

Singleton *Singleton::singleton_ = nullptr;

Singleton *Singleton::GetInstance(const std::string &value) {
    if (singleton_ == nullptr) {
        singleton_ = new Singleton(value);
    }
    return singleton_;
}