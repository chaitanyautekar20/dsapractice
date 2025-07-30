#include <iostream>
using namespace std;

void display(int a[],int size){// int *a
   //   int size=sizeof(a)/sizeof(a[0]);// this will give the error as it will give the size of pointer
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void change(int *b,int size){
    b[0]=100;
}
int main(){
    int arr[5]={1,4,2,7,47};
    int size=sizeof(arr)/sizeof(arr[0]);
    // accessing the elements of array in another function
    //updation, pass by value or reference 
    display(arr,size );
    change(arr,size);
    display(arr,size);
}