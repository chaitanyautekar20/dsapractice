#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    cout<<ptr<<endl;
    cout<<ptr[0]<<endl;//this print value
    cout<<&arr[0]<<endl;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    *ptr=8;// arr[0]=8
    ptr++;// ptr is pointing to 2nd element
    *ptr=9;
    ptr--;// tobring it to original element
     for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
        // anoter way 
        cout<<i[arr]<<" ";
    }
    cout<<endl;
    //anotre way
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;// ptr is pointing to 1st

}