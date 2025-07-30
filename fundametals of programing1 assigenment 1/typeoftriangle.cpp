#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the sides of triangle";
    cin>>a>>b>>c;

    if(a==b && a==c){
        cout<<"equilaterial triangle";
    }

    else if(a==b || b==c || a==c){
        cout<<"isocales triangle";
    }

    else {
        cout<<"scalane triangle";
    }
}