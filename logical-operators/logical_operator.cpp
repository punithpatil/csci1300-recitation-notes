#include<iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 5;
    
    bool check1 = a < b;
    
    int x = 0;
    int y = -1;
    
    bool check2 = x < y;
    
    if (check1 && check 2){
        cout<<"check1 AND check2 are true"<<endl;
    }
    
    if (check1 || check2){
        cout<<"check1 OR check2 are true"<<endl;
    }
    
    if (! check1){
        cout<<"NOT check1 is true"<<endl;
    }
    
    if (!check2){
        cout<<"NOT check2 is true";
    }
    return 0;
}