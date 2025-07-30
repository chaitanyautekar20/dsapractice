#include<iostream>
using namespace std;

void gun(){
    return;
    cout<<"hello cw"<<endl;
}

void fun(){
    cout<<"hello pw"<<endl;
    gun();
    return;
}

int main(){
    fun();
}