//
// Created by Keut on 17-9-2018.
//

#ifndef ROBOTARMMOTIONANDVISION_VECTOR_H
#define ROBOTARMMOTIONANDVISION_VECTOR_H


class Vector {
public:
    Vector(double x, double y);
    Vector(double x, double y, double z);

    double squaredDistance(Vector vector);
    double getX();
    double getY();
    double getZ();

    void normalize();

    double getDotProduct(Vector vector);

    Vector getCrossProduct(Vector vector);

private:
    double x;
    double y;
    double z;
};


#endif //ROBOTARMMOTIONANDVISION_VECTOR_H
