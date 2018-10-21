#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

string gamut(vector<int> gam);

int main(void){
    vector<int> gamuts;
    int input, count = 8;

    while(count --){
        cin >> input;
        gamuts.push_back(input);
    }
    cout<<gamut(gamuts)<<endl;
    return 0;
}

string gamut(vector<int> gam){
    vector<int> check(gam);
    sort(check.begin(), check.end());
    if(gam == check){
        return "ascending";
    }

    sort(check.begin(), check.end(), greater<int>());
    if(gam == check){
        return "descending";
    }

    return "mixed";
}