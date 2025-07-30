#include <iostream>
#include <cmath>
using namespace std;

int sum(int x,int y){
    return x+y;
}

int main(){
   // cout<<sum(40,63);

   int x,y;
   cout<<"enter the x and y";
   cin>>x>>y;
   cout<<min(x,y);//built in func
   cout<<max(x,y);
   cout<<sqrt(x);
   cout<<sqrt(y);
}