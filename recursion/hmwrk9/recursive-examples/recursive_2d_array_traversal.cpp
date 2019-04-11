#include <iostream>
using namespace std;

void recursive_2d_array_traversal(int i, int j, int arr[][3]){
    cout<<arr[i][j]<<",";
    if  (j + 1 < 3)
        recursive_2d_array_traversal(i, j + 1, arr);
    else if (i + 1 < 3)
        recursive_2d_array_traversal(i + 1, 0, arr);
}
int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    recursive_2d_array_traversal(0, 0, arr);
    return 0;
}