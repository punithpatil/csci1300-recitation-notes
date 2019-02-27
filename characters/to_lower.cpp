#include <iostream>

using namespace std;

int main(){
    char ch = 'B';
    
    cout<<ch<<endl;
    
    cout<<ch - 'A'<<endl;
    
    cout<<ch - 'A' + 'a'<<endl;
    
    cout<<(char)(ch - 'A' + 'a')<<endl;
    return 0;
}