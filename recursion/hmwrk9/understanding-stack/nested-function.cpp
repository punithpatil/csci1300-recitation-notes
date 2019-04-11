#include<iostream>
using namespace std;

void function4(){
    cout<< "Hello, world!"<<endl;
}
void function3(){
    cout<< "Hello, world!"<<endl;
    function4();
}
void function2(){
    cout<< "Hello, world!"<<endl;
    function3();
}
void function1(){
    cout<< "Hello, world!"<<endl;
    function2();
}
int main(){
    function1();
    return 0;
}
