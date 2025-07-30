#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    int lastdigit=0;
    int count=0;
    while(n>0){
        int lastdigit =n%10;
        count+=lastdigit;
      n=n/10;
    }
    cout<<count;
}