#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int input;
    vector<int> numbers;

    for(int index = 0; index < 3; index ++){
        cin>>input;
        numbers.push_back(input);
    }

    sort(numbers.begin(), numbers.end());

    cout<<numbers[1]<<endl;

    return 0;
}