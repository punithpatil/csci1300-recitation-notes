#include<iostream>

using namespace std;

int main(){
    
    cout<<"Declaring variable a with value 7"<<endl;
    int a = 7;
    int count = 0;
    
    {
        int a; 
        cout<<"storing value 2 in a"<<endl;
        a = 2;
        count++;
    }
    
    cout<<"The value in a:"<<endl;
    cout<<a<<endl;
    
    return 0;
    
}
