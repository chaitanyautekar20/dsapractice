#include<iostream>
using namespace std;
int main(){
   // char ch='A';
   char str[]={'a','b','c','d','e'};

   for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
   }// op a b c d e ♣ 
   cout<<str<<endl;
    // char str[5]="abcde";// will not work
    // char str[5]="abcd"; // will work
    // for(int i=0;i<5;i++){
    //     cout<<str[i]<<" ";
    // }

    // cout<<(int)(str[5]);
}