#include <iostream>
#include "Arm.h"
#include "Segment.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Arm arm = Arm();
    arm.addSegment(Segment(10, 40));
    arm.addSegment(Segment(5, 30));
    arm.setDestinationPoint(4,5);
    arm.calculateAngles();
    return 0;
}