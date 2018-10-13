#include <iostream>

using namespace std;

int main(void){
    int count; 
    int A, B;
    cin.tie(NULL);
    
    cin>>count;
    
    for(int index = 0; index < count; index ++){
        cin>>A;
        cin>>B;
        
        cout<<A+B<<'\n';
    }

    return 0;
}