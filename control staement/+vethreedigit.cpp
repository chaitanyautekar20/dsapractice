#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"num is 3digit"<<n;
    }
    else{
        cout<<"num is not 3digit";
    }
}