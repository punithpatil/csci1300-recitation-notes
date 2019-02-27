#include<iostream>

using namespace std;

int main(){

    bool condition = false;
    cout<<"Before Loop"<<endl;
    
    for (int i = 1; i <= 3; i = i + 1){
        cout<<"Inside Loop"<<endl;
    }
    
    cout<<"After Loop"<<endl;
    return 0;
    
}
