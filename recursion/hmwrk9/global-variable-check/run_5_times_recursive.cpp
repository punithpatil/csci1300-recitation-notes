#include <iostream>
using namespace std;

int count = 0; 

void print_count(){
    cout<< count <<endl;
    count++;
    
    if (count < 5)
        print_count();
    
}
int main(){
    print_count();
    return 0;
}