#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Skateboard.h"
#include "Scooter.h"
#include "Jet.h"
#include "ctime"
#include "cstdlib"


void printVehiclesRoster(Vehicle **vehicles, int size);
int main() {
    srand(time(NULL));      //Added this here so the random times are not the same

    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 12;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Skateboard("Zero", "MK II");
    vehiclesArray[7] = new Skateboard("Bueno", "SPO");
    vehiclesArray[8] = new Jet();
    vehiclesArray[9] = new Jet("Sean O's", "cool beans", "Rocket", 3 );
    vehiclesArray[10] = new Scooter("Razor", "IV");
    vehiclesArray[11] = new Scooter("Lucky", "2018");

    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}