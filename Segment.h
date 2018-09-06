//
// Created by Keut on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_SEGMENT_H
#define ROBOTARMMOTIONANDVISION_SEGMENT_H


class Segment {
public:
    Segment(double length, double angle = 0 );
    Segment *setPreviousSegment;

private:
    double length;
    double angle;
    Segment *previousSegment = nullptr;
};


#endif //ROBOTARMMOTIONANDVISION_SEGMENT_H
