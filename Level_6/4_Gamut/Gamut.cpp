#include <iostream>
#include <vector>
#include <string>

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
    int check = 0;
    for(int index = 1; index < gam.size(); index ++){
        if(check > check + gam[index] - gam[index - 1]){
            return "mixed";
        }
        check += gam[index] - gam[index - 1];
    }
    if(check > 0){
        return "ascending";
    }
    else if(check < 0){
        return "descending";
    }
    else {
        return "mixed";
    }
}