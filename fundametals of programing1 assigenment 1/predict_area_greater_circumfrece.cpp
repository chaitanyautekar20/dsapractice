#include <iostream>
using namespace std;

int main(){
    int radius ;
    cout<<"enter the radius";
    cin>>radius;
    float pi=3.14;

    float area =pi*radius*radius;
    float circum=2*pi*radius;

    if(area>circum){
        cout<<"area is greater then circumfrence";
    }

    else {
        cout<<"circumference is greater the area";
    }

    return 0;
}