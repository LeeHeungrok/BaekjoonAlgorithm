#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(void){
    map<char, int> alphabetCheck;
    map<char, int>::iterator iter;
    int max = 0, check = 0;
    char result;
    string inputAlphabet;

    cin >> inputAlphabet;

    // 소문자 대문자로 변형
    transform(inputAlphabet.begin(), inputAlphabet.end(), inputAlphabet.begin(), ::toupper);

    for(int index = 0; index < inputAlphabet.length(); index ++){
        alphabetCheck[inputAlphabet[index]] += 1;
    }

    for(iter = alphabetCheck.begin(); iter != alphabetCheck.end(); ++ iter){
        if(max < (*iter).second){
            result = (*iter).first;
            max = (*iter).second;
        }
    }

    for(iter = alphabetCheck.begin(); iter != alphabetCheck.end(); ++ iter){
        if(max == (*iter).second){
            check ++;
        }
    }

    if(check > 1){
        cout << "?" << endl;
    }
    else {
        cout << result << endl;
    }

    return 0;
}