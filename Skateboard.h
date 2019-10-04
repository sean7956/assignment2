//
// Created by sean7 on 10/4/2019.
//

#ifndef ASSIGNMENT2_SKATEBOARD_H
#define ASSIGNMENT2_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle{
public:
    explicit Skateboard(string brand, string model, int time);  //The Constructor
    virtual ~Skateboard();      //Destructor

    int getTime;        //getter
    int setTime;        //Setter
    virtual double mileageEstimate(double time);    //Finds the distance based on time
    virtual string toString();
};


#endif //ASSIGNMENT2_SKATEBOARD_H
