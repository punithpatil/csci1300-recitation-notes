#ifndef POINT_H
#define POINT_H

class Point {
    private:
        double _x;
        double _y;
        
    public:
        Point();
        Point(double, double);
        double getX();
        double getY();
        double setX(double);
        double setY(double);
        double distance_from_origin();
};

#endif