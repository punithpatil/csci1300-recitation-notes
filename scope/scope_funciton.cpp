#include<iostream>
using namespace std;
void function1(int a){
    
    cout<<"    Enter into function, create variable a"<<endl;
    // int a;
    
    cout<<"    Inside function: store 7 into variable a"<<endl;
    a = 7;
    
    cout<<"    The value in variable a = "<<a<<endl;
    
    cout<<"    Exit function"<<endl;
    
}
int main(){
    
    cout<<"MAIN: Declaring variable a"<<endl;
    int a;
    
    cout<<"MAIN: Storing value 2 in a"<<endl;
    a = 2;
    
    cout<<"MAIN: Calling function now"<<endl;
    
    function1(a);
    
    cout<<"MAIN: Back into the main program"<<endl;
    
    cout<<"MAIN:The value of a is "<<endl;
    cout<<a<<endl;
    
    return 0;
    
}
