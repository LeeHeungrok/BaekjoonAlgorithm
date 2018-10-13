#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<string> days = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    vector<int> daysNumber = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldaysNumber = 0;
    int inputMonth, inputDay;

    cin>>inputMonth;
    cin>>inputDay;

    for(int index = 1; index < inputMonth; index ++){
        totaldaysNumber += daysNumber[index];
    }

    totaldaysNumber += inputDay;

    cout<<days[totaldaysNumber % 7]<<endl;

    return 0;
}
