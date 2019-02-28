#include <iostream>
#include <fstream>
using namespace std;

int main () {

    fstream filestr;
    // File exists
    // filestr.open ("test.txt");
    // File does no exist
    // filestr.open ("test.txt");
    if (filestr.is_open()) {
        filestr << "File successfully open";
        filestr.close();
    }
    else {
        cout << "Error opening file";
    }
    return 0;
}