#include <iostream>
using namespace std;

void print_count6(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        ;// print_count*(count); // print_count6 won't be called anyway
}
void print_count5(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count6(count);
}
void print_count4(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count5(count);
}
void print_count3(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count4(count);
}
void print_count2(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count3(count);
}
void print_count1(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count2(count);
}
void print_count(int count){
    cout<< count <<endl;
    count++;
    if (count < 5)
        print_count1(count);
}
int main(){
    print_count(0);
    return 0;
}