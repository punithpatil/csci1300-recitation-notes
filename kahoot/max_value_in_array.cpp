#include <iostream>
using namespace std;

int foo(int arr[], int length){
    int output = arr[0];
    for(int i = 0; i < length; i++){
        if(arr[i] > output){
            output = arr[i];
        }
    }
    return output;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<foo(arr, 8)<<endl;
    return 0;
}