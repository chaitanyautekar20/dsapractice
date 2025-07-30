#include <iostream>
using namespace std;

int main(){
    int l ,b;
    cout<<"entre the length and bredth";
    cin>>l>>b;
    int area=l*b;
    int perimeter=2*(l+b);

    if (area>perimeter){
        cout<<"area is greater then perimetre";
    }

    else {
        cout<<"perimeter is greter then area";
    }
}