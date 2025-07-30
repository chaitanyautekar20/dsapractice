#include <iostream>
using namespace std;

int main(){
    cout<<"enter the int";
    int n;
    cin>>n;
    if (n<0){
        int y=-(n);
        cout<<y;
    }
    else {//n>=0
        cout<<n;
    }
}