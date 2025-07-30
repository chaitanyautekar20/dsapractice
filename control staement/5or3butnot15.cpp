#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num";
    cin>>n;
    // if((n%5==0 || n%3) && n%15!=0 ){
    //     cout<<"The num is div by 5and3 but not by15";
    //         }
    //         else {
    //             cout<<"the is not div";
    //         }
    if(n%5==0 || n%3==0){
        if(n%15){
            cout<<"the num is div by 3and5 but not by15";
        }
        else{
            cout<<"not matching";
        }
    }
    else{
        cout<<"not matchin ";
    }

}
