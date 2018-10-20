#include <iostream>
#include <string>

using namespace std;

int main(void){
    int numberCount[10] = {0,};
    int A, B, C;
    string result;

    cin>>A>>B>>C;
    
    result = to_string(A * B * C);
    
    for(int index = 0; index < result.length(); index ++){
        int temp = result.at(index) - 48;
        numberCount[temp] ++;
    }
    for(int index = 0; index < 10; index ++){
        cout<<numberCount[index]<<endl;
    }
    
    return 0;
}