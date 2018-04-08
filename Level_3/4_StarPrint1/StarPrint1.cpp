#include <iostream>
using namespace std;

int main(){
    int star;

    cin>>star;

    for(int starNumber = 0; starNumber < star; starNumber ++){
        for(int printNumber = 0; printNumber <= starNumber; printNumber ++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}