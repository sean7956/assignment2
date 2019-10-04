//
// Created by sean7 on 10/4/2019.
//

#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

double Skateboard::mileageEstimate(double time) {
    return 0;
}

string Skateboard::toString() {
    return "-> SkateBoard\n" + Vehicle::toString();
}

Skateboard::~Skateboard() = default;

