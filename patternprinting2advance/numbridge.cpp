#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    //2n-1
    for(int i=1;i<=2*n-1;i++){
        cout<<i;
    }
    cout<<endl;
    int m=n-1;//new lines

    int nsp=1;
   for(int i=1; i<=m;i++){
    int a=1;
    for (int  j = 1; j<=m+1-i; j++)
    {
        cout<<a;
        a++;
    }

    // for(int k=1;k<=2*i-1;k++ )
    // {
    //     cout<<" ";
    //         k+=2;
    // }//not working

    for(int k=1;k<=nsp;k++){
        cout<<" ";
        a++;
    }
    nsp+=2;

     for (int  l = 1; l<=m+1-i; l++)
    {
        cout<<a;
        a++;
    }
    cout<<endl;
   }
}