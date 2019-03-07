#include <iostream>
#include <cmath>
#include <stdlib.h> 
#include <time.h>    
using namespace std;

double distance_between_points(double x1, double y1, double x2, double y2 ){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void fill_arrays(double x_axis[], double y_axis[]){
    for (int i=0; i < 100;  i++){
        x_axis[i] = rand() * 100;
        y_axis[i] = rand() * 100;
    } 
}
int main(){
    double x[100],y[100];
    
    // set radom values 
    srand ( time(NULL) );
    fill_arrays(x, y);
    
   
    // get two random positions
    int random_position1 = rand() % 100;
    int random_position2 = rand() % 100;
    
    // define variables to hold the co-ordinates
    double x1, y1, x2, y2;
    x1 = x[random_position1];
    y1 = y[random_position1];
    
    x2 = x[random_position2];
    y2 = y[random_position2];
    
    // get distace between any two random points
    double distance = distance_between_points(x1, y1, x2, y2);
    
    cout<<"The distance between ";
    cout<<x1<<","<<y1;
    cout<<" and ";
    cout<<x2<<","<<y2;
    cout<<" = "<<distance<<endl;
    
    return 0;
}