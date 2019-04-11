#include <iostream>
using namespace std;

int sum_of_elements(int pos, int array_length, int arr[]){
    if (pos >= array_length)
        return 0; // will add nothing to the sum
    return arr[pos] + sum_of_elements(pos + 1, array_length, arr);
}
int main(){
    int arr[] = {1,1,1,3};
    cout<<sum_of_elements(0, 4, arr)<<endl;
    return 0;
}