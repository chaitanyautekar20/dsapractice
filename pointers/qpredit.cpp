#include <iostream>
using namespace std;

int main(){
    int a=15;
    int *ptr=&a;
    int c=(*ptr)++;//postincrement
    int b=++(*ptr);//preincrement
    cout<<a<<" "<<c<<" "<<b;
}