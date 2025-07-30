#include<iostream>
using namespace std;

int stair(int n){
    if(n==0) return 1;
    // else if(n==2) return 2;
    // else if(n==3) return 3;
    // else if(n%2==0){
    // return stair(n-1)+1+stair(n-2)+stair(n-3);
    // }

    return stair(n-1)+stair(n-2)+stair(n-3);
    
}

int main(){
    cout<<stair(4);
}