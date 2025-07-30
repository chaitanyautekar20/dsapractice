#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the num greatre out put";
    cin>>x;
    int count =0 ;
    for(int i=0;i<=n-1;i++){
        if(x<arr[i]) count++; 
    }
    
    cout<<count;
}