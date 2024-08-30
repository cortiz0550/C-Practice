#include "line.hpp"
#include <cmath>

Line::Line(int point1_x, int point1_y, int point2_x, int point2_y) {
    point1_x = point1_x;
    point1_y = point1_y;
    point2_x = point2_x;
    point2_y = point2_y;

    point1.setX(point1_x);
    point1.setY(point1_y);
    point2.setX(point2_x);
    point2.setY(point2_y);
}

void Line::set_point1(Point location) {
    point1 = location;
}

void Line::set_point2(Point location) {
    point2 = location;
}

float Line::get_length() const {    
    return (sqrt(pow((point2.getX() - point1.getX()), 2) + pow((point2.getY() - point1.getY()), 2)));
}

int main() {
    
    Line myLine(100, 20, 40,90);
    int length = myLine.get_length();

    std::cout << "Length: " << length << std::endl;
    std::cout << "Point 1 X Coordinate: ";
    std::cout << myLine.get_point1().getX() << std::endl;

    return 0;
}