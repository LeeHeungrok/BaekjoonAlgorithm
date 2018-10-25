#include <iostream>
#include <string>

using namespace std;

int main(void){
    string input;
    string croatia[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    cin >> input;
    
    for(int index = 0; index < 8; index ++){
        size_t pos = 0;
        while(pos < input.length()){
            if((pos = input.find(croatia[index], pos)) != string::npos){
                input.replace(pos, croatia[index].length(), "*");
            }
        }
    }

    cout<<input.length()<<endl;

    return 0;
}