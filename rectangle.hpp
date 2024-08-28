#include <iostream>
#include "point.hpp"

class Rectangle {
    public:
        Rectangle(int newTop, int newLeft, int newRight, int newBottom);
        ~Rectangle() {}
        int getTop() const { return top; }
        int getLeft() const { return left; }
        int getRight() const { return right; }
        int getBottom() const { return bottom; }

        Point getUpperLeft() const { return upperLeft; }
        Point getUpperRight() const { return upperRight; }
        Point getLowerLeft() const { return lowerLeft; }
        Point getLowerRight() const { return lowerRight; }

        void setUpperLeft(Point location);
        void setUpperRight(Point location);
        void setLowerLeft(Point location);
        void setLowerRight(Point location);

        void setTop(int newTop);
        void setLeft(int newLeft);
        void setRight(int newRight);
        void setBottom(int newBottom);

        int getArea() const;

    private:
        Point upperLeft;
        Point upperRight;
        Point lowerLeft;
        Point lowerRight;
        int top;
        int left;
        int right;
        int bottom;

};