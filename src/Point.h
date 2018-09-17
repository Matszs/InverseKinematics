//
// Created by Keut on 5-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_POINT_H
#define ROBOTARMMOTIONANDVISION_POINT_H


class Point {
public:
    Point(double x, double y);
    bool pointIsInRange(Point target, double range);
    double getX();
    double getY();

private:
    double x;
    double y;
};


#endif //ROBOTARMMOTIONANDVISION_POINT_H
