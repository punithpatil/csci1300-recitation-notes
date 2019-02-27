#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    int random_x;
    
    random_x = rand();
    //random_x = rand() % 100;
    
    cout<<"\nRandom X = "<<fixed<<random_x;
    
    
    return 0;
    
}
