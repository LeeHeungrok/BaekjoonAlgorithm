#include <iostream>
using namespace std;

int main(){
    double left, right, result;

    cin>>left>>right;
    
    result = left / right;

    cout<<fixed;
    cout.precision(10);
    cout<<result<<endl;
    
    return 0;
}