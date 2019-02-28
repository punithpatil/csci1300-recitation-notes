#include<iostream>
using namespace std;


int main() {
    int a = 1;
    int b = 1;
    int x = 1;
    int* c = &x;
    
    int arr[1];
    
    cout<<"Value in a: "<<a<<endl;
    
    cout<<"Address location of b: "<<&b<<endl;
    
    cout<<"Address location of x: "<<&x<<endl;
    cout<<"Pointer pointing to address of x: "<<c<<endl;
    
    cout<<"Address of arr: "<<arr<<endl;
    cout<<"Address of arr: "<<&arr<<endl;
    
    
    return 0;
}