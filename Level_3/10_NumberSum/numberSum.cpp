#include <iostream>

using namespace std;

int main(void){
    int inputLength;
    string inputNumber;
    int result = 0;

    cin>>inputLength;
    cin>>inputNumber;

    for(int index = 0; index < inputLength; index ++){
        result += (int) inputNumber.at(index) - 48;
    }

    cout<<result<<endl;

    return 0;
}
