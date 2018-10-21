#include <iostream>
#include <vector>

using namespace std;

int average(vector<int> grad);

int main(void){
    int input;
    vector<int> grades;

    for(int index = 0; index < 5; index ++){
        cin>>input;
        grades.push_back(input);
    }

    cout<<average(grades)<<endl;

    return 0;
}

int average(vector<int> grad){
    int result = 0;
    for(int index = 0; index < 5; index ++){
        if(grad.at(index) < 40){
            result += 40;
        }
        else {
            result += grad.at(index);
        }
    }
    
    return result / 5;
}