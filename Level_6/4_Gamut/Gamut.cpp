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
        check += gam[index] - gam[index - 1];
    }
    if(check == gam.size() - 1){
        return "ascending";
    }
    else if(check == -(gam.size() - 1)){
        return "descending";
    }
    else {
        return "mixed";
    }
}