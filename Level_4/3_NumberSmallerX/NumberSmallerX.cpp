#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int numberLength, X, temp;
    vector<int> numbers;
    
    cin>>numberLength>>X;

    for(int index = 0; index < numberLength; index ++){
        cin>>temp;
        numbers.push_back(temp);
    }

    for(int index = 0; index < numberLength; index ++){
        if(numbers[index] < X){
            cout<<numbers[index]<<" ";
        }
    }

    return 0;
}