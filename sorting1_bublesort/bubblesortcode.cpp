#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={5,4,6,3,2,1};
    int n=6;
    // print 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // buble sort
    // for(int i=0;i<n-1;i++){// n-1 pass
    // //traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             // int temp = arr[j];
    //             // arr[j]=arr[j+1];
    //             // arr[j+1]= temp;

    //            // swap function
    //            swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
//bublesort optimized
    for(int i=0;i<n-1;i++){
        bool flag= true;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true){// swap dodn't happened
            break;
        }
    }



    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}