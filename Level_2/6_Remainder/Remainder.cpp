#include <iostream>
using namespace std;

int main(){
    int left, center, right;

    cin>>left>>center>>right;

    cout<<(left + center) % right<<endl;
    cout<<(left % right + center % right) % right<<endl;
    cout<<(left * center) % right<<endl;
    cout<<(left % right * center % right) % right<<endl;
    return 0;
}