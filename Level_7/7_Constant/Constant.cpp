#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){
    string left, right;
    int changeLeft, changeRight;

    cin >> left >> right;

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    changeLeft = atoi(left.c_str());
    changeRight = atoi(right.c_str());

    if(changeLeft > changeRight){
        cout << changeLeft;
    }
    else {
        cout << changeRight;
    }
    cout << endl;
}
