#include <iostream>
using namespace std;

int main(){
    int input;

    cin>>input;
    for(int index = 1; index < 10; index ++){
        cout<<input<<" * "<<index<<" = "<<input*index<<"\n";
    }
    return 0;
}