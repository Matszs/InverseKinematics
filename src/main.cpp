#include <iostream>
#include "Arm.h"
#include "Segment.h"

int main() {
    Arm arm = Arm();
    arm.addSegment(Segment(10, 40));
    arm.setDestinationPoint(0, 10);
    arm.setThreshold(1);
    arm.run();
    arm.print(true);
    return 0;
}