//
// Created by sean7 on 10/4/2019.
//

#include "Skateboard.h"
#include<cstdlib>
#include <cmath>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

double Skateboard::mileageEstimate(double num) {
    int random = rand() % 40;   //Sets up the mileage
    random += 10;               //Adds 10 to put it into the right bounds
    double y = double(random)/100;  //makes it so the mileage is to the right power
    double total = num*y;       //multiples mileage by time
    if (num > 25 and num < 250)
    {
        int random2 = rand() % int(floor(num/3));   //add up to 1/3 of the mileage if between 25 and 250
        total += random2;
    }
    return total;
}

string Skateboard::toString() {
    return "-> SkateBoard\n" + Vehicle::toString();
}

Skateboard::~Skateboard() = default;

