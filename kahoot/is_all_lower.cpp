#include <iostream>

using namespace std;
// won't work for input with all special characters
bool foo(){
    string test = "hello world";
    bool flag = true;
    for(int i=0; i <= test.length(); i++){
        if (test[i] >= 'A' && test[i] <= 'Z'){
            //return false;
            flag = false;
        }
    }
    //return true;
    return flag;
}

int main(){
    cout<<foo()<<endl;
    return 0;
}