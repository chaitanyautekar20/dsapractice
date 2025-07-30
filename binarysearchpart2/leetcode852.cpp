#include<iostream>
#include<vector>
using namespace std;
// 1 2 4 5 3 2 1
// return the mointain index

int main(){
    int m;
    cout<<"enter the element";
    cin>>m;
    //vector<int>arr(6);
    int arr[]={};
    int a;
    for(int i=0;i<m;i++){
        cin>>a;
        arr[i]=a;
    }
    int n=m;
    for(int i=1;i<=n-2;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            cout<<arr[i]<<"index"<<i;
            // idx=i;
            //break;
        }
    }//return idx;
}