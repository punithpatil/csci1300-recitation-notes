#include <iostream>
using namespace std;

int count = 0;
void print_count6(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        ;// print_count*(); // print_count6 won't be called anyway
}
void print_count5(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count6();
}
void print_count4(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count5();
}
void print_count3(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count4();
}
void print_count2(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count3();
}
void print_count1(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count2();
}
void print_count(){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count1();
}
int main(){
    print_count();
    return 0;
}