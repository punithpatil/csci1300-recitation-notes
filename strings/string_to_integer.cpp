#include <iostream>   
#include <string>     
using namespace std;

int main ()
{
  //string str = "asd"; // std::invalid_argument, no integer in the input string 
  
  //string str = "2147483647"; // max value that can be stored in int, this works fine
  
  //string str = "2147483648"; // +1 added, this will cause it to exceed maximum possible value and lead to 'std::out_of_range'
  
  int num = stoi(str);
  
  cout<<num<<endl;

  return 0;
}