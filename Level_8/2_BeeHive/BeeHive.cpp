#include <iostream>

using namespace std;

int main(void){
    int inputDigit;
    int count = 1, step = 1;

    cin>>inputDigit;
    
    while(1){
        if(count >= inputDigit){
            break;
        }
        count += step * 6;
        step ++;
    }

    cout<<step<<endl;
    return 0;
}