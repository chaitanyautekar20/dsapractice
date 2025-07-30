#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of 1st matrix ";
    cin>>m;
    int n;
    cout<<"Enter the column of 1st matrix";
    cin>>n;

    int p;
    cout<<"Enter the row of 2nd matrix";
    cin>>p;
    int q;
    cout<<"Enter the column of 2nd matrix";
    cin>>q;
    if(n==p){
        int a[m][n];
        int b[p][q];
        cout<<"Enter the element of 1st matrix";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        cout<<"Enter the element of 2nd matrix";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //res matrix
        int res[m][q];
        // multiply
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                //multiply
                //res[i][j] = a[i][0]*b[0][j] + a[i]b[1]*b[1][j] + a[i][2]*b[2][j]
                res[i][j]= 0;
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        // print the res
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"The matrix can not be multipled";
    }
}