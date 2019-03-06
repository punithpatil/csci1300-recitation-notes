// In the .cpp file both files are included
// This will cause foo to be defined once by the grandparent.h
// When parent.h is included in the next line, the preprocessor will include it
// but not grandparent.h as it has already been included  
// function foo
// No compile error 
#include "grandparent.h"
#include "parent.h"

int main(){
    return 0;
}