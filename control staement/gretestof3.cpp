#include <iostream>
using namespace std;
int main(){
    cout<<"enter the num";
    int a;
    cin>>a;

    cout<<"enter the num";
    int b;
    cin>>b;

    cout<<"enter the num";
    int c;
    cin>>c;
    if (a>b && a>c){
        cout<<a;
    }
    if (b>a && b>c){
        cout<<b;
    }
    if (c>b && c>a){
        cout<<c;
    }

}
