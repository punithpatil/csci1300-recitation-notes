// extract to string
#include <iostream>

using namespace std;

int main ()
{
  string name;

  // cout << "Input: ";
  // cin >> name;
  // cout << "Output: " << name << "!\n";
  
  cout << "Input: ";
  getline (cin,name);
  cout << "Output " << name <<endl;

  return 0;
}