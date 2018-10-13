#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(void){
    int testCase, gradeNumber, temp, count;
    float result;
    vector<int> numbers;

    cin>>testCase;

    for(int start = 0; start < testCase; start ++){
        cin>>gradeNumber;
        result = 0;
        count = 0;
        
        for(int index = 0; index < gradeNumber; index ++){
            cin>>temp;
            result += temp;
            numbers.push_back(temp);
        }
        
        result = result / (float)gradeNumber;

        for(int index = 0; index < gradeNumber; index ++){
            if(numbers[index] > result)
                count ++;
        }
        result = (float)count*100/(float)gradeNumber;
        printf("%.3f%%\n", result);
        numbers.clear();
    }
}