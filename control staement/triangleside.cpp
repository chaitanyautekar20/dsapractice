#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"enter the sides";
   cin>>a>>b>>c;
   if((a+b>c) && (b+c>a)&& (a+c>b)){
    cout<<a<<b<<c<<"can be the sides";
   }
   else{
    cout<<"not a side";
   } 
}