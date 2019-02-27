#include<iostream>

using namespace std;

int main(){
    string sentence = "0123456789";
    for (int i = 0; i<= sentence.length(); i++){
        cout<<"Index: "<<i<<" character: "<<sentence[i]<<endl;
    }
    return 0;
}