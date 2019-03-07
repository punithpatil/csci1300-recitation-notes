#include <iostream>
#include <cmath>

using namespace std;

double distance_between_points(double x1, double y1, double x2, double y2 ){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main(){
    double x1,y1,x2,y2;
    
    // This won't be set to any default value, garbage value will be present
    cout<<"Default value of x1: "<<x1<<endl;
    cout<<"Devalue value of y1: "<<y1<<endl;
    
    x2 = 3;
    y2 = 4; 
    
    x1 = 1; // set value of x2 explicitly 
    y1 = 2; // set value of y2 explicitly 
    
    double distance = distance_between_points(x1, y1, x2, y2);
    
    cout<<"The distance between ";
    cout<<x1<<","<<y1;
    cout<<" and ";
    cout<<x2<<","<<y2;
    cout<<" = "<<distance<<endl;
    
    return 0;
}