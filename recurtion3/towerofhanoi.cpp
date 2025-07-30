#include<iostream>
using namespace std;

void hanoi(int n,char a,char b,char c){
    if(n==0) return;// base
    hanoi(n-1,a,c,b);//s h d
    cout<<a<<"->"<<c<<endl;
    hanoi(n-1,b,a,c);//s h d

}

int main(){
    int n=3;
    hanoi(n,'A','B','C');
}