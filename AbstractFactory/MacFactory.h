//
// Created by cristi on 10/24/22.
//

#ifndef CREATIONALDPS_MACFACTORY_H
#define CREATIONALDPS_MACFACTORY_H


#include "GUIFactory.h"
#include "MacButton.h"
#include "MacScrollBar.h"


class MacFactory : public GUIFactory {
public:
    Button *createButton() {
        return new MacButton;
    }

    ScrollBar *createScrollBar() {
        return new MacScrollBar;
    }
};


#endif //CREATIONALDPS_MACFACTORY_H
