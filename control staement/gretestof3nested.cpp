#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the nums a b c";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"a"<<a;
        }
        else {
            cout<<"greter"<<c;
        }
    }
     else{//b>a
        if(b>c){
            cout<<"b"<<b;
        }
        else{
            cout<<c<<"greter";
        }
    }
     
}