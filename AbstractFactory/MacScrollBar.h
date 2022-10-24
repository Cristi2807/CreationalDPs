//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_MACSCROLLBAR_H
#define CREATIONALDPS_MACSCROLLBAR_H

#include "ScrollBar.h"
#include <iostream>

class MacScrollBar : public ScrollBar {
public:
    void paint() {
        std::cout << " Mac ScrollBar \n";
    }
};


#endif //CREATIONALDPS_MACSCROLLBAR_H
