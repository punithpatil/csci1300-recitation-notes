#include <iostream>

using namespace std;

bool foo(int arr1[], int arr2[], int length){
    // Assume both arrays are of the same 'length'
    for(int i = 0; i < length; i++) {
        if (arr1[i] != arr2[i])
            return false;
    }
    return true; 
}


int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5};
    cout<<foo(arr1, arr2, 5)<<endl;
    return 0;
}