#include <iostream>
using namespace std;

int main(){
    // int x=7;
    // int *ptr=&x;
    // cout<<ptr<<endl; //0x61ff08
    // ptr=ptr+1;
    // cout<<ptr<<endl; //0x61ff0c

// int x=7;
//     int *ptr=&x;
//     cout<<ptr<<endl; //0x61ff08
    
//     cout<<*ptr<<endl;//7
//     ptr= ptr+1;
//     cout<<*ptr<<endl; //6422284


int x=7;
    int *ptr=&x;
    cout<<ptr<<endl; //0x61ff08
    
    cout<<*ptr<<endl;//7
    *ptr= *ptr+1; // simlar x=x+1
    cout<<*ptr<<endl; // 8

}