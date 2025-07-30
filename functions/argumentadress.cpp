#include <iostream>
using namespace std;
int b=9; //global vriable can be accessed by all the function
void fun(int x, int y){
     cout<<"cout fun x"<<&x<<endl;
    cout<<"cout fun y"<<&y;
    cout<<a;
}
void f(){
   cout<<b;
    cout<<a;  //can not be used because its scope is in main
}

int main(){
    int x=3;
    int y=4;
    cout<<"cout main x"<<&x<<endl;
    cout<<"cout main y"<<&y;
    fun(x,y);
    int a=2;
}