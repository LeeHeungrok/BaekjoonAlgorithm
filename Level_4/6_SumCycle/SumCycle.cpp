#include <iostream>

using namespace std;

int main(void){
    int first, count = 0;
    int left, right, prev;
    cin>>first;

    prev = first;
    do{
        left = prev / 10;
        right = prev % 10;

        prev = (right * 10) + ((left + right) % 10);
        count ++;
    } while (first != prev);

    cout<<count<<endl;

    return 0;
}