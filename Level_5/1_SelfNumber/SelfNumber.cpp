#include <iostream>

using namespace std;

int selfNumber(int digit);

int main(void){
    bool checkSelfNumber[10001] = {false,};

    for(int index = 1; index < 10000; index ++){
        int number = selfNumber(index);
        checkSelfNumber[number] = true;
    } 
    
    for(int index = 1; index < 10000; index ++){
        if(!checkSelfNumber[index]){
            cout<<index<<endl;
        }
    }

    return 0;
}

int selfNumber(int digit){
    int result = digit;
    for(int index = 10000; index != 1; index /= 10){
        if(digit / index > 0){
            result += digit / index;
            digit %= index;
        }
    }
    result += digit;

    return result;
}