#include <iostream>

using namespace std;

void findFaction(int numb);

int main(void){
    int input;
    
    cin>>input;

    findFaction(input);
    return 0;
}

void findFaction(int numb){
    int temp, checkSon = 0, checkNumber = numb;
    
    for(int i = 1; i <= checkNumber; i ++){
        temp = numb - i;
        checkSon ++;
        if(temp < i){
            break;
        }
        numb -= i;
    }

    if(checkSon % 2 == 0){
        cout<< numb << "/" << checkSon - (numb - 1) << endl;
    }
    else {
        cout<< checkSon - (numb - 1) << "/" << numb << endl;
    }
}