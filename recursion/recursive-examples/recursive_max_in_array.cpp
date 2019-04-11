#include <iostream>
#include <limits>
using namespace std;
int max(int a, int b){
    if (a >= b)
         return a;
    else
        return b;
}
int max_in_array(int position, int array_length, int arr[]){
    if (position >= array_length)
        return - numeric_limits<int>::max(); // negative infinity
    return max(arr[position], max_in_array(position+1,array_length, arr)); 
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<max_in_array(0, 9, arr)<<endl;
    return 0;
}