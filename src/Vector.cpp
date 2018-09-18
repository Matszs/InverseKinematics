//
// Created by Keut on 17-9-2018.
//

#include <cmath>
#include "Vector.h"

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
    this->z = 0.0;
}

Vector::Vector(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

double Vector::getX() {
    return this->x;
}

double Vector::getY() {
    return this->y;
}

double Vector::getZ() {
    return this->z;
}

double Vector::squaredDistance(Vector vector) {
    return sqrt(pow((this->getX() - this->getY()), 2) + pow((vector.getX() - vector.getY()), 2));
}

void Vector::normalize() {
    double length = sqrt((this->x * this->x) + (this->y * this->y) + (this->z * this->z));
    this->x /= length;
    this->y /= length;
    this->z /= length;
}

double Vector::getDotProduct(Vector vector) {
    return this->getX() * vector.getX() + this->getY() * vector.getY() + this->getZ() * this->getZ();
}

Vector Vector::getCrossProduct(Vector vector) {
    return Vector(
            this->getY() * vector.getZ() - this->getZ() * vector.getY(),
            this->getZ() * vector.getX() - this->getX() * vector.getZ(),
            this->getX() * vector.getY() - this->getY() * vector.getX()
            );
}
