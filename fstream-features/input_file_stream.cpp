#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string data;
    ifstream myfile;
    
    myfile.open ("example.txt");
    
    myfile >> data;
    
    myfile.close();
    
    cout<<data;
    return 0;
}