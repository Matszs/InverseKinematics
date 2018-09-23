//
// Created by Keut on 5-9-2018.
//
#define _USE_MATH_DEFINES /* Use for declaring M_PI in cmath */

#include <iostream>
#include <cmath>
#include "Segment.h"

#define RADTODEG(angleRadians) ((angleRadians) * 180.0 / M_PI)
#define DEGTORAD(angleDegrees) ((angleDegrees) * M_PI / 180.0)


Segment::Segment(double length, double angle) {
    this->length = length;
    this->angle = angle;
}

void Segment::turnTowardsDestinationPoint(Vector destination) {
    Vector rootPosition = this->getRootPosition();
    Vector currentEnd = Vector(
            cos(this->angle) * this->length,
            sin(this->angle) * this->length
            );
    double threshold = 1.0;
    if(currentEnd.squaredDistance(destination) > threshold) {
        Vector currentVector = Vector(
                currentEnd.getX() - rootPosition.getX(),
                currentEnd.getY() - rootPosition.getY()
                );
        Vector targetVector = Vector(
                destination.getX() - rootPosition.getX(),
                destination.getY() - rootPosition.getY()
                );
        currentVector.normalize();
        targetVector.normalize();
        double cosAngle = targetVector.getDotProduct(currentVector);
        if(cosAngle < 0.99999) {
            Vector crossProduct = targetVector.getCrossProduct(currentVector);
            double turnAngle = acos(cosAngle);
            double turnDegrees = RADTODEG(turnAngle);
            if(crossProduct.getZ() > 0.0) {
                this->angle -= turnDegrees;
            } else {
                this->angle += turnDegrees;
            }
        }
    }
}

void Segment::print() {
    std::cout << "length: " << this->length << ", angle: " << this->angle << std::endl;
}

Vector Segment::getRootPosition() {
    return Vector(0, 0);
}

Vector Segment::getEndpoint() {
    Vector root = this->getRootPosition();
    double angleInRad = DEGTORAD(this->angle);
    Vector end = Vector(
            cos(angleInRad) * this->length,
            sin(angleInRad) * this->length
            );
    return end;
}

Vector Segment::getEndpoint(Vector root) {
    double angleInRad = DEGTORAD(this->angle);
    Vector end = Vector(
            cos(angleInRad) * this->length,
            sin(angleInRad) * this->length
            );
    return end;
}