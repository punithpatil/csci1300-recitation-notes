#include <iostream>
using namespace std;

void print_count(int count){
    cout<< count <<endl;
    count++;
    
    if (count < 5)
        print_count(count);
}
int main(){
    print_count(0);
    return 0;
}