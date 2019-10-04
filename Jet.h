//
// Created by sean7 on 10/4/2019.
//

#ifndef ASSIGNMENT2_JET_H
#define ASSIGNMENT2_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle{
private:
    int numberOfEngines;

public:
    Jet();
    explicit Jet(string brand, string model, string fueltype, string numEng);

    virtual ~Jet();
    string getNumbEng();
    void setNumEng(int x);
    virtual double mileageEstimeat(double time);
    virtual string toString();

};


#endif //ASSIGNMENT2_JET_H
