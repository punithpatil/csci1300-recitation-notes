// To compile: g++ point.cpp distance_driver.cpp 

#include "point.h"

#include <iostream>
#include <cmath>

using namespace std;

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