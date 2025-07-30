#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter the marks";
     cin>>n;
     if(n>=91){
        cout<<"excelent";
     }
     else if(n>=81){
        cout<<"very good";
     }
     else if(n>=71){
        cout<<"good";
     }
      else if(n>=61){
        cout<<"can do better";
     }
      else if(n>=51){
        cout<<"avg";
     }
      else if(n>=41){
        cout<<"bellow avg";
     }
      else{
        cout<<"fail";
     }
}
