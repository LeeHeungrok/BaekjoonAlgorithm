#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<string> days = {"SUN", "MON", "TUE", "WEN", "THU", "FRI", "SAT"};
    vector<int> daysNumber = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldaysNumber, inputMonth, inputDay;

    

    cin>>inputMonth;
    cin>>inputDay;

    for(int index = 0; index < inputMonth; index ++){
        totaldaysNumber += daysNumber[index];
    }

    totaldaysNumber += inputDay;

    cout<<days[totaldaysNumber % 7];

    return 0;
}
