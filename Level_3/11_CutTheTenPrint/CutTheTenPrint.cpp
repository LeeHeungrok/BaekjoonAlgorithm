#include <iostream>

using namespace std;

int main(void){
    string inputString;
    int count = 0;

    cin>>inputString;
    
    count = inputString.length() / 10;
    for(int index = 0; index <= count; index ++){
        cout<<inputString.substr(index * 10, 10)<<endl;
    }

    return 0;
}