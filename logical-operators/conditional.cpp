#include<iostream>
#include<typeinfo>
using namespace std;

int main() {
    int val1 = 4;
    int val2 = 5;
    
    bool check;
    
    check = (4 > 5) || (6 != 7) || (4 != 4);
    
    //cout<<"The type of variable is: "<<typeid(check).name()<<endl;
    cout<<"The value of check is: "<<check<<endl;
    
    return 0;
}