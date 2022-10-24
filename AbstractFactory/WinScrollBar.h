//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_WINSCROLLBAR_H
#define CREATIONALDPS_WINSCROLLBAR_H

#include "ScrollBar.h"
#include <iostream>

class WinScrollBar : public ScrollBar {
public:
    void paint() {
        std::cout << " Windows ScrollBar \n";
    }
};


#endif //CREATIONALDPS_WINSCROLLBAR_H
