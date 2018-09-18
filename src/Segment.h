//
// Created by Keut on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_SEGMENT_H
#define ROBOTARMMOTIONANDVISION_SEGMENT_H


#include "Vector.h"

class Segment {
public:
    Segment(double length, double angle = 0 );
    Segment *setPreviousSegment;
    void turnTowardsDestinationPoint(Vector);
    void print();

private:
    double length;
    double angle;
    Segment *previousSegment = nullptr;

    Vector getRootPosition();
};


#endif //ROBOTARMMOTIONANDVISION_SEGMENT_H
