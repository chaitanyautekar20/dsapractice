#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int arr[9]={5,0,4,0,6,3,0,2,1};
    int n=9;
    // print 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // buble sort
    for(int i=0;i<n-1;i++){// n-1 pass
    //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                // int temp = arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]= temp;

               // swap function
               swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}