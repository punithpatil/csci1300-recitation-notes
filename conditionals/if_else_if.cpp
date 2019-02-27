#include<iostream>
using namespace std;

int main(){
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = true;
    if (flag1){
        cout<<"In if-block"<<endl;
    }
    else if(flag2){
        cout<<"In else-if block"<<endl;
    }
    else if(flag3){
        cout<<"In second else-if block"<<endl;
    }
    else{
        cout<<"In else-block"<<endl;
    }
    
    cout<<"End of program"<<endl;
    
    return 0;
}