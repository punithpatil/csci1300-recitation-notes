#include <iostream>

using namespace std;

int foo(){
    string test = "variable314";
    int count = 0;
    for(int i=0; i <= test.length(); i++){
        if (test[i] >= '0' && test[i] <= '9'){
            count++;
        }
    }
    return count;
}


int main(){
    cout<<foo()<<endl;
    return 0;
}