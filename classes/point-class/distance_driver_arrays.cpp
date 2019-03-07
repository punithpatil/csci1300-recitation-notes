// To compile: g++ point.cpp distance_driver_arrays.cpp 

#include "point.h"

#include <iostream>
#include <cmath>
#include <stdlib.h> 
#include <time.h>

using namespace std;

double distance_between_points(Point p1, Point p2){
    double x1 = p1.getX();
    double y1 = p1.getY();
    double x2 = p2.getX();
    double y2 = p2.getY();
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void fill_arrays(Point p[]){
    for (int i=0; i < 100;  i++){
        p[i].setX(rand() * 100);
        p[i].setY(rand() * 100);
    } 
}
int main(){
    Point p[100];
    cout<<"Default value of x1: "<<p[0].getX()<<endl;
    cout<<"Devalue value of y1: "<<p[0].getY()<<endl;
    
    // set radom values 
    srand ( time(NULL) );
    fill_arrays(p);
    
    // get two random positions
    int random_position1 = rand() % 100;
    int random_position2 = rand() % 100;
    
    // define variables to hold the two points
    Point p1 = p[random_position1];
    Point p2 = p[random_position2];
    
    double distance = distance_between_points(p1, p2);
    
    cout<<"The distance between ";
    cout<<p1.getX()<<","<<p1.getY();
    cout<<" and ";
    cout<<p2.getX()<<","<<p2.getY();
    cout<<" = "<<distance<<endl;
    
    return 0;
}
