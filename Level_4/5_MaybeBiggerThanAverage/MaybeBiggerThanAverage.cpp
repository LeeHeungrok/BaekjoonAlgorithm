#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int testCase, gradeNumber, temp, count = 0;
    float result = 0;
    vector<int> numbers;

    cin>>testCase;

    for(int start = 0; start < testCase; start ++){
        cin>>gradeNumber;
        
        for(int index = 0; index < gradeNumber; index ++){
            cin>>temp;
            result += temp;
            numbers.push_back(temp);
        }
        
        result = result / (float)gradeNumber;

        for(int index = 0; index <gradeNumber; index ++){
            if(numbers[index] > result)
                count ++;
        }

        cout<<(float)count/(float)gradeNumber*100<<endl;
        numbers.clear();
        result = 0;
        count = 0;
    }
}