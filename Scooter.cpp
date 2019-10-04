//
// Created by sean7 on 10/4/2019.
//

#include "Scooter.h"

Scooter::Scooter(string brand, string model) : Vehicle(brand, model) {

}

double Scooter::mileageEstimate(double time) {
    return 0;
}

string Scooter::toString() {
    return "-> Scooter\n" + Vehicle::toString();
}

Scooter::~Scooter() = default;

