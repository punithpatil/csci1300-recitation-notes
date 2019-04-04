#include <iostream>
#include <vector>

using namespace std;

void add_something(vector<int> v){
    v.push_back(-9);
}
int main(){
    vector<int> v = {1, 2, 3};
    
    add_something(v);
    
    for (int i = 0; i < v.size(); i++)
        cout<<"v["<<i<<"] = "<<v[i]<<endl;
        
    return 0;
}