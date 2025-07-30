#include<iostream>
using namespace std;


void facupto(int n){
    for(int j=1;j<=n;j++){
        int f=1;
        for(int i=2;i<=j;i++){
            f*=i;
        }
        cout<<f<<endl;
    }
    // but here the TC  is high O(n2)
}

int fact(int n){
    int f=1;
    for(int i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

// with less time complexity

void facto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
        cout<<f<<endl;
    }
}


int main(){
    cout<<fact(5)<<endl;
    facupto(5);
    facto(5);// less TC
}