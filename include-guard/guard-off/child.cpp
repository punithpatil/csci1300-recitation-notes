// In the .cpp file both files are included
// This will cause foo to be defined once by the grandparent.h
// and once again by the parent.h in which grandpaent.h has alread been included
// With two instances of grandparent.h being included, foo function declaration 
// will be done twice 
// Compile error: ‘void foo()’ previously defined here will be thrown
#include "grandparent.h"
#include "parent.h"

int main(){
    return 0;
}