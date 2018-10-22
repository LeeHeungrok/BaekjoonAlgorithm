#include <iostream>
#include <string>

using namespace std;

#define ALPHABET_LENGTH 26

int main(void){
    int count, tempAlphabet, resultCount;
    string word;
    int checkAlphabet[ALPHABET_LENGTH] = {0, };

    cin >> count;

    resultCount = count;
    for(int index = 0; index < count; index ++){
        cin >> word;

        for(int index2 = 1; index2 < word.length(); index2 ++){
            tempAlphabet = word[index2] - 97;
            if(checkAlphabet[tempAlphabet] > -1){
                if((int)(word[index2 - 1] - 97) != tempAlphabet){
                    checkAlphabet[word[index2 - 1] - 97] = -1;
                }
            }
            else {
                resultCount --;
                break;
            }
        }
        
        // 배열 초기화
        for(int index2 = 0; index2 < ALPHABET_LENGTH; index2 ++){
            checkAlphabet[index2] = 0;
        }
    }

    cout << resultCount << endl;

    return 0;
}