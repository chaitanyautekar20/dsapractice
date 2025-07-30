#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"the num is div";
    }
    else{
        cout<<"not div";
    }
}