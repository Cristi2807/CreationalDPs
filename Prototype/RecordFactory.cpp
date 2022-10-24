//
// Created by cristi on 10/24/22.
//

#include "RecordFactory.h"

RecordFactory::RecordFactory() {
    m_records[CAR] = make_unique<CarRecord>("Ferrari", 5050);
    m_records[BIKE] = make_unique<BikeRecord>("Yamaha", 2525);
}

unique_ptr<Record> RecordFactory::createRecord(RecordType recordType) {
    return m_records[recordType]->clone();
}