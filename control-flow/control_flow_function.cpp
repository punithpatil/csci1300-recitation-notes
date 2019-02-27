#include<iostream>
using namespace std;

void function2(){
    
    cout<<"    2Enter into function"<<endl;
    
    cout<<"    2Inside function"<<endl;
    
    cout<<"    2Exit function"<<endl;
    
}


void function1(){
    
    function2();
    cout<<"    Enter into function"<<endl;
    
    cout<<"    Inside function"<<endl;
    
    cout<<"    Exit function"<<endl;
    
}

int main(){
    
    cout<<"Enter Program"<<endl;
    
    cout<<"Program is running"<<endl;
    
    cout<<"Calling function now"<<endl;
    
    function1();
    
    
    cout<<"Back into the main program"<<endl;
    
    cout<<"Exit Program"<<endl;
    
    return 0;
    
}
