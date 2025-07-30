#include <iostream>
using namespace std;

int main(){
    int *ptr =NULL;// reserved address
    cout<<ptr<<endl;//0
    cout<<&ptr<<endl;//this is pointer self adress 0x61ff0c
    char ch='\0';// null char asc value
    cout<<(int)ch;
}