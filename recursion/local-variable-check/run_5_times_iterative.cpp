#include <iostream>
using namespace std;

void print_count(int count){
    while(count < 5){
        cout<< count <<endl;
        count++;
    }
}
int main(){
    print_count(0);
    return 0;
}