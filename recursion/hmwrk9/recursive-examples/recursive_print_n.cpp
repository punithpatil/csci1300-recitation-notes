#include <iostream>
using namespace std;

void print_n(int n){
    if (n > 10)
        return;
    cout<<"Before recursive call: "<<n<<endl;
    print_n(n + 1);
    cout<<"After  recursive call: "<<n<<endl;
}
int main(){
    print_n(0);
    return 0;
}