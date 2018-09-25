//
// Created by Keut on 5-9-2018.
//

#include <iostream>
#include <list>
#include "Arm.h"
#include "Segment.h"
#include "Vector.h"

std::list<Segment> segments;

void Arm::setDestinationPoint(int x, int y) {
    destination = Vector(x, y);
}

void Arm::addSegment(Segment segment) {
    if(!segments.empty()) {
        segment.setPreviousSegment = &segments.back();
    }
    segments.push_back(segment);
}

void Arm::run() {
    int i = 1000;
    Segment *lastSegment = &segments.back();
    while(i && !isNearDestinationPoint()) {
        for (auto segment = segments.rbegin(); segment != segments.rend(); ++segment) {
            segment->turnTowardsDestinationPoint(this->destination, lastSegment);
        }
        --i;
    }
}

void Arm::print(bool printAllSegments) {
    Vector endpoint = segments.front().getRootPosition();
    for (auto &segment : segments) {
        endpoint = endpoint.add(segment.getEndpoint(endpoint));
        if(printAllSegments) {
            segment.print();
        }
    }
    std::cout << "Real endpoint: " << endpoint.getX() << "," << endpoint.getY() << "," << endpoint.getZ() << std::endl;
}

void Arm::printRealEndpoint() {
    Vector endpoint = segments.front().getRootPosition();
    for (auto &segment : segments) {
        endpoint = endpoint.add(segment.getEndpoint(endpoint));
    }
    std::cout << "Real endpoint: " << endpoint.getX() << "," << endpoint.getY() << "," << endpoint.getZ() << std::endl;
}

void Arm::setThreshold(double distance) {
    this->threshold = distance;
}

bool Arm::isNearDestinationPoint() {
    return segments.back().getEndpoint().isInRange(this->destination, this->threshold);
}
