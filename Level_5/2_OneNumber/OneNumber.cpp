#include <iostream>

using namespace std;

int findNumber(int number);

int main(void){
    int inputNumber;

    cin>>inputNumber;

    cout<<findNumber(inputNumber)<<endl;
    
    return 0;
}

int findNumber(int number){
    if(number < 100){
        return number;
    }

    int first;
    int second;
    int third;
    int result = 99;

    for(int index = 100; index <= number; index ++){
        first = index / 100 % 10;
        second = index / 10 % 10;
        third = index % 10;

        if(first + third == second * 2){
            result ++;
        }
    }

    return result;
}