//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_RECORD_H
#define CREATIONALDPS_RECORD_H

#include <memory>

class Record {
public:
    virtual ~Record() {}

    virtual void print() = 0;

    virtual std::unique_ptr<Record> clone() = 0;
};


#endif //CREATIONALDPS_RECORD_H
