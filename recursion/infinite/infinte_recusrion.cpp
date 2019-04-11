#include <iostream>
using namespace std;

void print_hello(){
    cout<< "Hello, World!"<<endl;
    print_hello();
}
int main(){
    print_hello();
    return 0;
}