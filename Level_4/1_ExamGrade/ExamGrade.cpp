#include <iostream>

using namespace std;

int main(void){
    int examGrade;

    cin>>examGrade;

    if(examGrade >= 90){
        cout<<"A"<<endl;
    }
    else if(examGrade >= 80){
        cout<<"B"<<endl;
    }
    else if(examGrade >= 70){
        cout<<"C"<<endl;
    }
    else if(examGrade >= 60){
        cout<<"D"<<endl;
    }
    else {
        cout<<"F"<<endl;
    }

    return 0;
}