#include <iostream>
using namespace std;

int main(){
    int star;

    cin>>star;

    for(int starNumber = 0; starNumber < star; starNumber ++){
        for(int printNumber = star - 1; printNumber >= 0; printNumber -- ){
            if(printNumber >= starNumber){
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}