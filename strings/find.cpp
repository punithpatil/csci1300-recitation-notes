#include <iostream>

using namespace std;

int main(){
    
    string sentence = "0123456789";
    
    cout<<sentence.find("13")<<endl;
    
    cout<<string::npos<<endl;
    
    cout<<(sentence.find("13") == string::npos)<<endl;
    
    return 0;
}