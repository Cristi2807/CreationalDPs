//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_RECORDFACTORY_H
#define CREATIONALDPS_RECORDFACTORY_H

#include "CarRecord.h"
#include "BikeRecord.h"
#include <unordered_map>

enum RecordType {
    CAR,
    BIKE,
};

class RecordFactory {

private:
    unordered_map<RecordType, unique_ptr<Record>, hash<int>> m_records;

public:
    RecordFactory();

    unique_ptr<Record> createRecord(RecordType recordType);
};


#endif //CREATIONALDPS_RECORDFACTORY_H
