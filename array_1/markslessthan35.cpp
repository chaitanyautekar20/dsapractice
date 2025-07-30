#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter num of student";
    cin>>n;
    int marks[n]; // 0 to n-1
    cout<<"enter the marks";
    //input marks
    for(int i=0; i<=n-1;i++){
        cin>>marks[i];
    }

    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}