#include <iostream>
using namespace std;

int count = 0;

void print_count(){
    while(count < 5){
        cout<< count <<endl;
        count++;
    }
}
int main(){
    print_count();
    return 0;
}