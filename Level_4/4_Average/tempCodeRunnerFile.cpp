#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> grades;
    int gradeLength, temp, max = 0;
    float result = 0;
    
    cin>>gradeLength;
    for(int index = 0; index < gradeLength; index ++){
        cin >> temp;
        
        grades.push_back(temp);

        if(max < temp){
            max = temp;
        }
    }

    for(int index = 0; index < gradeLength; index ++){
        result += ((float)grades[index] / (float)max) * 100;
    }

    cout<<result/gradeLength<<endl;

    return 0;
}