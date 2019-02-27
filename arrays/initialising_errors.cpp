#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    // Only way to initilise array using {}
    string str_array[10] = {"Hello", "World"};
    cout<<str_array[0]<<endl;
    cout<<str_array[1]<<endl;
    
    // You can uncomment and try the statements individually 
    // Below statements are illegal 
    // string str_array[10]; // You can declare it, but can not initilise using {} later
    // str_array[] = {"Hello", "World"}; // error: expected primary-expression before ‘]’
    // str_array = {"Hello", "World"}; // error: assigning to an array from an initializer list
    
    // What you are trying to do, assuming max represents the length of the array
    // Trying to acces a cell outside the length. Also this is causing the error you see
    // str_array[10] = {"Hello", "World"}; // terminate called after throwing an instance of 'std::length_error'
    
    // Bad idea to access array elements outside the declared length 
    // cout<<str_array[10]<<endl;
    
    return 0;
}