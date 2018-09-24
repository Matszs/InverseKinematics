//
// Created by Keut on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_ARM_H
#define ROBOTARMMOTIONANDVISION_ARM_H


#include "Segment.h"
#include "Vector.h"

class Arm {

private:
    Vector destination = Vector(0, 0);
    double threshold = 0;

public:
    void setDestinationPoint(int x, int y);

    void addSegment(Segment segment);

    void run();

    void print(bool printAllSegments);

    void printRealEndpoint();

    void setThreshold(double distance);


};


#endif //ROBOTARMMOTIONANDVISION_ARM_H
