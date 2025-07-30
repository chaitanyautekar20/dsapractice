#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"entre the num a and b";
    cin>>a>>b;
    bool flag =true;//true means power positive
    if(b<0){
        flag=false;//negative
        b=-b;
    }
    float power =1;

    for(int i=1;i<=b;i++){
        power*=a;
    }
    if(flag==false){
        power =1/power;
    }
    if(a==0 && b==0){
        cout<<"not defined";
    }
   else cout<<"power is"<<power;
}