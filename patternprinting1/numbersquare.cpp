#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"entre the squarenum";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}