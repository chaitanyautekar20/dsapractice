#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,4,3,2,1,0};
    int n=9;
    for(int i=1;i<=n-2;i++){
        if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]){
            cout<<i;
        }
    }
}


