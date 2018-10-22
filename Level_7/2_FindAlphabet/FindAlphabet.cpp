#include <iostream>
#include <string>

using namespace std;

#define ALPHABET_LENGTH 26

int main(void){
    string inputAlphabet;
    int alphabet[ALPHABET_LENGTH];
    int numberTransfer;

    fill_n(alphabet, ALPHABET_LENGTH, -1);

    cin >> inputAlphabet;

    for(int index = 0; index < inputAlphabet.length(); index ++){
        numberTransfer = inputAlphabet[index] - 97;
        alphabet[numberTransfer] = index;
    }

    for(int index = 0; index < ALPHABET_LENGTH; index ++){
        cout << alphabet[index];
        if(index != ALPHABET_LENGTH - 1){
            cout << " ";
        }
    }

    cout<<endl;

    return 0;
}