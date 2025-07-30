#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of  matrix ";
    cin>>m;
    int n;
    cout<<"Enter the column of matrix";
    cin>>n;

    int a[m][n];
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        // wave print
        for(int i=m-1;i>=0;i--){// row
            if(i%2==0){
                for(int j=0;j<n;j++){
                cout<<a[i][j];
            }
            }
            else{
                //i= 1,3,5
                for(int j=n-1;j>=0;j--){
                cout<<a[i][j];
            }
            }
            
        }
    // column wise print
    // but I have do 2nd Q
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
    }
}