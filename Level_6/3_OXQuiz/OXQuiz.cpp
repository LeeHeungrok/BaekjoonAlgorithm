#include <iostream>
#include <string>

using namespace std;

int checkOX(string str);

int main(void){
    int count;
    string oxQuiz;

    cin>>count;

    for(int index = 0; index < count; index ++){
        cin>>oxQuiz;
        cout<<checkOX(oxQuiz)<<endl;
    }

    return 0;
}

int checkOX(string str){
    int oxCount = 0;
    int exist = 0;
    for(int index = 0; index < str.length(); index ++){
        if(str.at(index) == 'O'){
            oxCount += exist + 1;
            exist ++;
        }
        else {
            exist = 0;
        }
    }
    return oxCount;
}