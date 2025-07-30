#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;// base case
    print(n-1);
    cout<<n<<endl;
}

int main(){
    print(4);
}