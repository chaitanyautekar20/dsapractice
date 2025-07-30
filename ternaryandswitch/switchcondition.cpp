#include <iostream>
using namespace std;

int main(){
    // 1 3 5 7 8 10 12 -> 31days
    // 2 4 6 9  11->30 days
    int x;
    cout<<"enter the month";
    cin>>x;
    switch(x<=7 && x%2!=0 ){
        case 1:
        cout<<"31";
    }

    switch(x>=8 && x%2==0 ){
        case 1:
        cout<<"31";
    }

    switch(x==4 || x== 6 || x==9 || x==11 ){
        case 1:
        cout<<"31";
    }
    switch(2 ){
        case 1:
        cout<<"28";
    }
}