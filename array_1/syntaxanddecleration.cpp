#include <iostream>
using namespace std;

int main(){
    int arr[7]; // 0 1 2 3 4 5 6
    arr[0] = 7;
    arr[1] = 1;
    arr[2] = 4;
    arr[3] = 5;
    arr[4] = 6;
    arr[5] = 8;
    arr[6] = 9;
    int a[5]={1,2,3,4,5}; // can also declare and intialise
    cout<<arr[0]<<endl;
    cout<<a[2]<<endl;


    // taking input in array
    for(int i=0;i<=6;i++){
        cin>>arr[i];
    }

    //can also print by loop
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}