#include <iostream>
using namespace std;

void recursive_array_traversal(int arr[], int position, int array_length){
    if (position < array_length){
        cout<<arr[position]<<endl;
        recursive_array_traversal(arr, position + 1, array_length);
    }
}

void iterative_array_traversal(int arr[], int position, int array_length){
    for(int i = position; i < array_length; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<"Iterative"<<endl;
    iterative_array_traversal(arr, 0, 5);
    cout<<"Recursive"<<endl;
    recursive_array_traversal(arr, 0, 5);
    return 0;
}