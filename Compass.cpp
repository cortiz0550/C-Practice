#include <iostream>

int main()
{
    // set up enumeration
    enum Direction { North, Northeast, East, SouthEast, South, Southwest, West, Northwest };

    // create a variable to hold it
    Direction heading;
    // initializing that variable
    heading = SouthEast;

    std::cout << "Moving " << heading << std::endl;

    return 0;
}