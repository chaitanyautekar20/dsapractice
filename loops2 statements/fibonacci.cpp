#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    // int sum=0;
    // int a=0;
    // int b=1;
    // for(int i=1;i<=n;i++){
    //     sum=a+b;
    //     a=b;
    //     b=sum;
    //     cout<<sum<<endl;
    // }

    int a=1;
    int b=1;
    int sum=0;

    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;

    }
   // cout<<sum<<endl;
   cout<<b;//because they are same and we solve the problem of 1 and 2;
}