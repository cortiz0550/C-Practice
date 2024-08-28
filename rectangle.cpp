#include "rectangle.hpp"

Rectangle::Rectangle(int newTop, int newLeft, int newRight, int newBottom) {
    top = newTop;
    left = newLeft;
    right = newRight;
    bottom = newBottom;

    upperLeft.setX(left);
    upperLeft.setY(top);

    upperRight.setX(right);
    upperRight.setY(top);

    lowerLeft.setX(left);
    lowerLeft.setY(bottom);

    lowerRight.setX(right);
    lowerRight.setY(bottom);
}

void Rectangle::setUpperLeft(Point location) {
    upperLeft = location;
    upperRight.setY(location.getY());
    lowerLeft.setX(location.getX());
    top = location.getY();
    left = location.getX();
}

void Rectangle::setUpperRight(Point location) {
    upperRight = location;
    upperLeft.setY(location.getY());
    lowerRight.setX(location.getX());
    top = location.getY();
    right = location.getX();
}

void Rectangle::setLowerLeft(Point location) {
    lowerLeft = location;
    lowerRight.setY(location.getY());
    upperLeft.setX(location.getX());
    bottom = location.getY();
    left = location.getX();
}

void Rectangle::setLowerRight(Point location) {
    lowerRight = location;
    lowerLeft.setY(location.getY());
    upperRight.setX(location.getX());
    bottom = location.getY();
    right = location.getX();
}

void Rectangle::setTop(int newTop) {
    top = newTop;
    upperLeft.setY(top);
    upperRight.setY(top);
}

void Rectangle::setLeft(int newLeft) {
    left = newLeft;
    upperLeft.setX(left);
    lowerLeft.setX(left);
}

void Rectangle::setRight(int newRight) {
    right = newRight;
    upperRight.setX(right);
    lowerRight.setX(right);
}

void Rectangle::setBottom(int newBottom) {
    bottom = newBottom;
    lowerLeft.setY(bottom);
    lowerRight.setY(bottom);
}

int Rectangle::getArea() const {
    int width = right - left;
    int height = top - bottom;
    return (width * height);
}

int main() {
    Rectangle myRectangle(100, 20, 40,90);
    int area = myRectangle.getArea();

    std::cout << "Area: " << area << std::endl;
    std::cout << "Upper Right Y Coordinate: ";
    std::cout << myRectangle.getUpperRight().getY() << std::endl;
    
    return 0;
}