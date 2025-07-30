#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key ";
    cin>>key;
    // search
    // checkmark flag 
    bool flag = false ;
    for (int  i = 0; i <=n-1; i++)
    {
        if(arr[i]==key)
        flag = true ;
    }
    if(flag == true )cout<<"element found";
    else cout<<" element not found ";
}