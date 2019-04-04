#include <iostream>
#include <vector>
class DummyClass {};

int main(){
    std::vector<int> v0;
    std::vector<double> v1;
    std::vector<DummyClass> v3;
    
    std::vector<int> v4 = {1, 2, 3};
    std::vector<double> v5 = {3.14, 0.5772};
    std::vector<DummyClass> v6 = {DummyClass(), DummyClass()};
    
    std::vector<int> v7;
    v7.push_back(1);
    v7.push_back(2);
    v7.push_back(3);
    
    return 0;
}