#include <utility>

//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_SINGLETON_H
#define CREATIONALDPS_SINGLETON_H

class Singleton {

protected:
    explicit Singleton(std::string  value) : value_(std::move(value)) {
    }

    static Singleton *singleton_;

    std::string value_;

public:
    static Singleton *GetInstance(const std::string &value);

    [[nodiscard]] std::string value() const {
        return value_;
    }

};


#endif //CREATIONALDPS_SINGLETON_H
