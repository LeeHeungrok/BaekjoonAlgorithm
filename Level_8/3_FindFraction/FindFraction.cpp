#include <iostream>

using namespace std;

void findFaction(int numb);

int main(void){
    int input;
    
    cin>>input;

    findFaction(input);
    return 0;
}

void findFaction(const int numb){
    int temp, checkSon = 1, checkNumber = numb;
    
    for(int i = 1; i <= numb; i ++){
        temp = checkNumber - i;
       
        if(temp < i){
            break;
        }
        checkSon ++;
        checkNumber -= i;
    }

    if(checkSon % 2 == 0){
        cout<< checkNumber << "/9" << checkSon - (checkNumber - 1) << endl;
    }
    else {
        cout<< checkSon - (checkNumber - 1) << "/8" << checkNumber << endl;
    }
}