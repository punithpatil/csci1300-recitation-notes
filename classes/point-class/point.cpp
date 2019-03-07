#include "point.h"
#include <cmath>

Point::Point(){
    _x = 0;
    _y = 0;
}
Point::Point(double x, double y){
    _x = x;
    _y = y;
}
double Point::getX(){
    return _x;
}
double Point::getY(){
    return _y;
}
double Point::setX(double x){
    _x = x;
}
double Point::setY(double y){
    _y = y;
}
double Point::distance_from_origin(){
    return sqrt(_x*_x + _y*_y);
}
