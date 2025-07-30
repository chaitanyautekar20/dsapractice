#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"enter the num a and op b";
    cin>>a>>op>>b;
    // if (op=='+'){
    //     cout<<a+b;
    // }
    // else if (op=='-')
    // {
    //     cout<<a-b;
    // }
    // else if(op=='*'){
    //     cout<<a*b;
    // }
    // else{
    //     cout<<a/b;
    // }

    // also can be done by stwitch
    switch (op)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;
    default:
        break;
    }

}