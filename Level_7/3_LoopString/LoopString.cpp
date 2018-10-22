#include <iostream>
#include <string>

using namespace std;

int main(void){
    int count, subCount;
    string inputString, resultString;

    cin >> count;

    for(int index = 0; index < count; index ++){
        cin >> subCount;
        cin >> inputString;
        
        for(int index2 = 0; index2 < inputString.length(); index2 ++){
            for(int index3 = 0; index3 < subCount; index3 ++){
                resultString.push_back(inputString[index2]);
            }
        }

        for(int index2 = 0; index2 < resultString.length(); index2 ++){
            cout << resultString[index2];
        }
        resultString.clear();
        cout << endl;
    }
    return 0;
}