// To submit to code runner you may have to compile one or more files together
// The reason being that code runner accepts only one file
// So combining "point.h", "point.cpp" and "distance_driver.cpp"

#include <iostream>
#include <cmath>

using namespace std;

// Paste "point.h" contents without the def macro
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

// Paste "point.cpp" contents without the include statements

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

double distance_between_points(Point p1, Point p2){
    double x1 = p1.getX();
    double y1 = p1.getY();
    double x2 = p2.getX();
    double y2 = p2.getY();
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
    Point p1;
    cout<<"Default value of x1: "<<p1.getX()<<endl;
    cout<<"Devalue value of y1: "<<p1.getY()<<endl;
    
    Point p2(3, 4); // set x2, y2 respectively 
    
    p1.setX(1); // set value of x2 explicitly 
    p1.setY(2); // set value of y2 explicitly 
    
    double distance = distance_between_points(p1, p2);
    
    cout<<"The distance between ";
    cout<<p1.getX()<<","<<p1.getY();
    cout<<" and ";
    cout<<p2.getX()<<","<<p2.getY();
    cout<<" = "<<distance<<endl;
    
    return 0;
}