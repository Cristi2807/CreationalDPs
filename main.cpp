#include <iostream>
#include "Singleton/singleton.h"
#include "Factory/VehicleManager.h"
#include "Builder/Cook.h"
#include "Builder/HawaiPizzaBuilder.h"
#include "Builder/SpicyPizzaBuilder.h"
#include "Prototype/RecordFactory.h"
#include "AbstractFactory/GUIFactory.h"
#include "AbstractFactory/Button.h"
#include "AbstractFactory/ScrollBar.h"
#include "AbstractFactory/MacFactory.h"

using namespace std;

int main() {

    Singleton *singleton = Singleton::GetInstance("123");

    cout << singleton->value() << endl;

    Singleton *singleton1 = Singleton::GetInstance("345");

    cout << singleton1->value() << endl << endl;


    auto *vehicleManager = new VehicleManager(VT_TwoWheeler);
    Vehicle *pVehicle = vehicleManager->getVehicle();
    pVehicle->printVehicle();
    cout << endl << endl;
    delete vehicleManager;


    Cook cook{};
    HawaiPizzaBuilder hawaiPizzaBuilder;
    cook.createPizza(&hawaiPizzaBuilder);
    cook.openPizza();

    SpicyPizzaBuilder spicyPizzaBuilder;
    cook.createPizza(&spicyPizzaBuilder);
    cook.openPizza();
    cout << endl;


    RecordFactory recordFactory;

    auto record = recordFactory.createRecord(CAR);
    record->print();

    record = recordFactory.createRecord(BIKE);
    record->print();

    GUIFactory *guiFactory;
    Button *button;
    ScrollBar *scrollBar;

    guiFactory = new MacFactory;
    button = guiFactory->createButton();
    button->paint();
    scrollBar = guiFactory->createScrollBar();
    scrollBar->paint();

    return 0;
}
