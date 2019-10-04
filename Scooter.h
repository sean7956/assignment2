//
// Created by sean7 on 10/4/2019.
//

#ifndef ASSIGNMENT2_SCOOTER_H
#define ASSIGNMENT2_SCOOTER_H
#include "Vehicle.h"


class Scooter : public Vehicle{
    /* I decided to to do a scooter because I see them around campus
     * The speed wil be between 0.5 and 2 miles per minute
     * I have decided to make it so that after 60 minutes the rate of
     * travel is reduced to 80% */
public:
    explicit Scooter(string brand, string model);
    virtual ~Scooter();      //Destructor
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //ASSIGNMENT2_SCOOTER_H
