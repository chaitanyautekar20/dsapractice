#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter th num";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"div by 5 and 3";
        }
        else{
            cout<<"notby 3 mathching";
        }
    }
    else{
        cout<<"not matching";
    }
}