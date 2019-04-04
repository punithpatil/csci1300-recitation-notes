#include <iostream>
#include <vector>

using namespace std;

vector<int> add_something(vector<int> v){
    v.push_back(-9);
    return v;
}
int main(){
    vector<int> v0 = {1, 2, 3};
    vector<int> v1 = {1, 2, 3};
    
    // return but dont assign to something
    add_something(v0);
    
    // return and store in orignal variable
    v1 = add_something(v1);
    
    cout<<"Vector v0"<<endl;
    for (int i = 0; i < v0.size(); i++)
        cout<<"v0["<<i<<"] = "<<v0[i]<<endl;
    
    cout<<endl<<"Vector v1"<<endl;
    for (int i = 0; i < v1.size(); i++)
        cout<<"v1["<<i<<"] = "<<v1[i]<<endl;
        
    return 0;
}