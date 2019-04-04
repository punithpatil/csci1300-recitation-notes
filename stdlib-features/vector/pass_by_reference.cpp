#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int b = a;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    
    a = a + 5;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
   
    cout<<"-----"<<endl; 
    int c = 20;
    int &d = c; //  It's an alias for an object - another name by which it can be called.
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    
    c = c + 5;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    return 0;
}
