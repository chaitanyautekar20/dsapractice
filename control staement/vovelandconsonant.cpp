#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char";
    cin>>ch;
    if ((int)ch>=65 && (int)ch<=90 ||(int)ch>=97 && (int)ch<=122){
        cout<<"it is alphabet";
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"vowel";
        }
        else{
            cout<<"consonate";
        }
    }
    else{
        cout<<"char is not alpha";
    }
}