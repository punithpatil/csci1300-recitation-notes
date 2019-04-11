#include <iostream>
using namespace std;

void print_triangle_recursive(int count, int n){
    if (count > n)   // base case: stop execution
        return ;
    for(int i = 0; i <= count; i++)
        cout<<"#";
    cout<<endl;
    print_triangle_recursive(count + 1, n);
    for(int i = 0; i <= count; i++)
        cout<<"#";
    cout<<endl;
}

void print_triangle_iterative(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    print_triangle_iterative(5);
    print_triangle_recursive(0, 5);
    return 0;
}