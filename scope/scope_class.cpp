#include <iostream>
using namespace std;

class Scope{
    private:
        int _val;
        int array[];
    public:
        Scope(){
            int _val = 0;
            int array[10] = {0};
        }
        int getVal(){
            return _val;
        }
        int getValAtIndex(int i){
            return array[i];
        }
};

int main(){
    Scope s1;
    cout<<"val: "<<s1.getVal()<<endl;
    
    cout<<"Accessing an index in the array"<<endl;
    cout<<s1.getValAtIndex(0)<<endl;
    cout<<s1.getValAtIndex(1)<<endl;
    cout<<s1.getValAtIndex(2)<<endl;
    cout<<s1.getValAtIndex(3)<<endl;
    cout<<s1.getValAtIndex(11)<<endl; // I don't get a segmentation fault, although this has to be outside the bounds of the array
    
    for(int i = 0;; i++){ // Lets use a loop and force segmentation fault
        cout<<"Index: "<<i<<" Value in array: "<<s1.getValAtIndex(i)<<endl;
    }
    return 0;
}