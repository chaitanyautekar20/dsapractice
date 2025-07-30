#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,3,2,4,5,7,8,9,6,10};
    int target = 5;
    bool flag = false;
    for(int i=0;i<10;i++){
        if(arr[i]==5){
            flag = true;
            break;
        }
    }

    if(flag==true){
        cout<<"traget got";
    }
    else{
        cout<<"target not found";
    }
}