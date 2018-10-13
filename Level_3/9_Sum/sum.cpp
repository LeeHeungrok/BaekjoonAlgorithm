#include <iostream>

using namespace std;

int main(void){
    int input;
    int result = 0;

    cin>>input;

    for(int start = 1; start <= input; start ++){
        result += start;
    }
    
    cout<<result;

    return 0;
}