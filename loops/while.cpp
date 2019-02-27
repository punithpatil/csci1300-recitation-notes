#include<iostream>

using namespace std;

int main(){

    bool condition = true;
    cout<<"Before Loop"<<endl;
    int count = 0;
    while (count < 3)
        cout<<"Inside Loop"<<endl;
        count = count + 1;
    
    
    cout<<"After Loop"<<endl;
    
    return 0;
    
}
