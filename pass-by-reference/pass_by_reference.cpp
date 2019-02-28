#include<iostream>
using namespace std;

void modify(int p, int* q, int* r) {
    p = 27; // passed by value: only the local parameter is modified
    *q = 27; // passed by value or reference, check call site to determine which
    *r = 27; // passed by value or reference, check call site to determine which
}

int main() {
    int a = 1;
    int b = 1;
    int x = 1;
    int* c = &x;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<x<<endl;
    
    modify(a, &b, c); // a is passed by value, b is passed by reference by creating a pointer (call by value),
                    // c is a pointer passed by value
                    // b and x are changed
                    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<x<<endl;
    
    return 0;
}