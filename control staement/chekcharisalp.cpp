#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char";
    cin>>ch;
    if ((int)ch>=65 && (int)ch<=90 ||(int)ch>=97 && (int)ch<=122){
        cout<<"it is alphabet";
    }
    else{
        cout<<"char is not alpha";
    }
}