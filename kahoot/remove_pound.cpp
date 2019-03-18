#include <iostream>

using namespace std;

void foo(){
    string test = "XKCD #1739";
    string output = "";
    for(int i=0; i <= test.length(); i++){
        if (test[i] != '#'){
            output += test[i];
        }
    }
    cout<<output<<endl;
}

int main(){
    foo();
    return 0;
}