#include <iostream>
using namespace std;

int main(){
    int x=4;
    int* p=&x;

    float y= 3.14;
    float* m=&y;

    bool z=true;
    bool* k=&z;   

    cout<<&x<<endl;   //  0x61ff08
    cout<<p<<endl;// 0x61ff08


    cout<<&y<<endl;   
    cout<<m<<endl;

    cout<<&z<<endl;  
    cout<<k<<endl;
}
    
