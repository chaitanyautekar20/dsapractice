#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    // for each loop 
    for(int ele : arr){
        cout<<ele<<" ";
    }
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        //min element of orange
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
cout<<endl;
    for(int ele : arr){
        cout<<ele<<" ";
    }
}