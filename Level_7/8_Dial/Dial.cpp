#include <iostream>
#include <string>

using namespace std;

#define ALPHABET_LENGTH = 26

int main(void){
    int result = 0;
    string inputAlphabet;

    cin >> inputAlphabet;
    
    for(int index = 0; index < inputAlphabet.length(); index ++){
        int temp = inputAlphabet[index] - '0';
        if(temp == 0){
            result += 3;
        }
        else if(temp == 1){
            result += 2;
        }
        else {
            result += ((inputAlphabet[index] - 65) / 3) + 3;
        }
    }
    
    cout << result << endl;

    return 0;
}