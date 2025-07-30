#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    // rows 3 0-2
    // column 3 0-2
    cout<<arr[0][0]<<endl;
    cout<<arr[0][1]<<endl;// garbage value
    arr[0][0]=4;
    cout<<arr[0][0]<<endl;
     // anoter way

     int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
     cout<<brr[0][0]<<endl;
     for(int i=0;i<=2;i++){// row
        for(int j=0;j<=2;j++){
            // j is collumn
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
     }
}