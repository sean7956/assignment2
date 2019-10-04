//
// Created by sean7 on 10/4/2019.
//

#include <iostream>
#include "Jet.h"

Jet::Jet() {
numberOfEngines=1;
setBrand("Custom");
setModel("VTx");
}

Jet::Jet(string brand, string model, string fuel, int numEng) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuel);
    setNumEng(numEng);
}

int Jet::getNumbEng() {
    return  numberOfEngines;
}

void Jet::setNumEng(int x) {
numberOfEngines = x;
}

double Jet::mileageEstimate(double time) {
    int random = (rand() % 60) + 40;        //Sets the bounds of the miles per minute
    double mile = random * time;            //gets the mileage
    if ( numberOfEngines > 2 && getFuelType() == "Rocket")  //checks the case to add more to the mileage
    {
        int numengs = numberOfEngines;
        double percentage = mile * 0.055;
        mile += numengs*percentage;         //Adds the extra percent when more than 2 rockets

    }
    return mile;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getNumbEng());
}


Jet::~Jet() = default;
