#include<iostream>
using namespace std;

void modify(int arr2[]) {
    cout<<"Address of arr2: "<<arr2<<endl;
    arr2[0] = 1;
}

void equivalet(int* p){
    cout<<"Address of a in equivalent: "<<p<<endl;
    *p = 1;
}

int main() {
    int arr[10] = {0};
   
    cout<<"Address of arr: "<<arr<<endl;
    modify(arr); 
    cout<<"Address of arr: "<<arr<<endl;
    cout<<"Value at index 0: "<<arr[0]<<endl;
    
    int a = 0;
    cout<<"Address of a: "<<&a<<endl;
    equivalet(&a);
    cout<<"Value in a: "<<a<<endl;
    
    return 0;
}