#include <iostream>
#include <climits>
using namespace std;

int main(){
    int x;
    cout<<"enter the size of array";
    cin>>x;
    int arr[x];
    cout<<"enter the element of array";
    // input
    for(int i=0;i<=x-1;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<=x-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<min<<endl;
}