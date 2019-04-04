#include <iostream>
#include <vector>

using namespace std;

int main(){
    std::vector<int> v = {1,2,3,4,5};
    cout<<v.size()<<endl;   // output size of vector
    v.push_back(-9);        // append a new value to the end
    //cout<<v.at(v.size());   // try to get the value at length, error: std::out_of_range
    cout<<v.at(v.size() - 1)<<endl;   
    cout<<v[v.size() - 1]<<endl;   // array like access
    
    return 0;
}