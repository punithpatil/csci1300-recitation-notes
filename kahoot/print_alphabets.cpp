#include <iostream>

using namespace std;

void foo(){
    for(int i='A'; i<= 'Z'; i++){
        cout<<(char)i<<endl;
    }
}
int main(){
    foo();
    return 0;
}