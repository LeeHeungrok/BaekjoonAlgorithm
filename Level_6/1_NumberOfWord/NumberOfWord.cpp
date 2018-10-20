#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    int count = 1;

    getline(cin, str);
    
    for(int index = 0; index < str.length(); index ++){
        if(str.at(index) == ' '){
            count ++;
        }
    }

    cout<<count<<endl;

    return 0;
}