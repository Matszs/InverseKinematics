//
// Created by Keut on 5-9-2018.
//

#include <list>
#include "Arm.h"
#include "Segment.h"
#include "Vector.h"

std::list<Segment> segments;

void Arm::setDestinationPoint(int x, int y) {
    destination = Vector(x, y);
}

void Arm::addSegment(Segment segment) {
    if(segments.empty()) {
        segment.setPreviousSegment = &segments.back();
    }
    segments.push_back(segment);
}

void Arm::run() {
    segments.back().turnTowardsDestinationPoint(this->destination);
}

void Arm::print() {
    for (auto &segment : segments) {
        segment.print();
    }
}
