//
// Created by Keut on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_ARM_H
#define ROBOTARMMOTIONANDVISION_ARM_H


#include "Point.h"
#include "Segment.h"

class Arm {

private:
    Point destinationPoint = Point(0, 0);

public:
    void setDestinationPoint(int x, int y);
    void addSegment(Segment segment);
    void calculateAngles();
};


#endif //ROBOTARMMOTIONANDVISION_ARM_H
