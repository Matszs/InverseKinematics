//
// Created by Keut on 5-9-2018.
//

#include <cmath>
#include "Point.h"

double x;
double y;

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::getX() {
    return this->x;
}

double Point::getY() {
    return this->y;
}

bool Point::pointIsInRange(Point target, double range) {
    return fabs(target.getX() - this->getX()) < range || fabs(target.getY() - this->getY()) < range;
}
