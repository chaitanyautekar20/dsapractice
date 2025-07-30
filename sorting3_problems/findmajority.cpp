#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,2,5};
    int n=5;
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count>(n/2)) cout<<arr[i];
    }
}