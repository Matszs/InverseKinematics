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
    segments.back().turnTowardsDestinationPoint(this->destination);
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
