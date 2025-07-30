#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the row";
    cin>>m;
    int n;
    cout<<"enter the column";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // transpose
    for(int j=0;j<n;j++){
        // column
        for(int i=0;i<m;i++){
            cout<<arr[i][j];
        }
        cout<<endl;
        
    }

}