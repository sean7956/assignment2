//
// Created by sean7 on 10/4/2019.
//

#include <iostream>
#include "Scooter.h"

Scooter::Scooter(string brand, string model) : Vehicle(brand, model) { //brand and model go to the parent

}

double Scooter::mileageEstimate(double time) {
    int random = (rand() % 150) + 50;       //Starts the range of miles per minute up
    double mpm = random/100.0;
    if (time < 60)
    {                                       //The case where they ride for less than 60 minutes
        return mpm*time;
    } else{
        double first60 = 60*mpm;            //The first 60 minutes is the base speed
        mpm = mpm *0.8;                     //mpm is now 80% of previous value
        double after60 = time - 60;
        return (after60*mpm)+first60;       //returns mileage of firs 60 minutes plus the rest of the time
    }
}

string Scooter::toString() {
    return "-> Scooter\n" + Vehicle::toString();
}

Scooter::~Scooter() = default;

