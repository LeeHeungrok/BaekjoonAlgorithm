#include <string>
#include <iostream>
using namespace std;

int main(){
    string input;
    int count = 0;

    while(count < 100){
        cin>>input;
        if(input.length() > 100){
            input.erase(100, input.length() - 100);
        }
        cout<<input<<endl;
        count ++;
    }
    return 0;
}