#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    //2n-1
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1;//new lines

    int nsp=1;
   for(int i=1; i<=m;i++){
    for (int  j = 1; j<=m+1-i; j++)
    {
        cout<<"*";
    }

    // for(int k=1;k<=2*i-1;k++ )
    // {
    //     cout<<" ";
    //         k+=2;
    // }//not working

    for(int k=1;k<=nsp;k++){
        cout<<" ";
    }
    nsp+=2;

     for (int  l = 1; l<=m+1-i; l++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}