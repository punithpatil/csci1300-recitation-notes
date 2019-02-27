#include<iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    int random_x;
    for (int t=0;t<10;t++)
    {
        srand ( time(NULL) );
        random_x = rand() % 100;
        cout<<"\nRandom X = "<<random_x;
    } 
    
    return 0;
    
}
