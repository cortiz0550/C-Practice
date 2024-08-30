#include "point.hpp"

class Line {
    public:
        Line(int point1_x, int point1_y, int point2_x, int point2_y);
        ~Line() {}

        Point get_point1() const { return point1; }
        Point get_point2() const { return point2; }

        void set_point1(Point location);
        void set_point2(Point location);

        float get_length() const;

    private:
        Point point1;
        Point point2;

        int point1_x;
        int point2_x;
        int point1_y;
        int point2_y;
};