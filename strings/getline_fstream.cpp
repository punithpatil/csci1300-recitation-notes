#include <fstream>
#include <iostream>
//#include <string>

using namespace std;

int main() {
   ifstream in1;
   ofstream out1;
 
   in1.open("input.txt"); 
   out1.open("output.txt"); 

   string line1;

   while (getline(in1, line1))
   {
       out1<<line1;

   }

   in1.close();
   out1.close();
   return 0;
}
