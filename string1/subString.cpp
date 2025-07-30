#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//     string s= "abcdef";
//     cout<<s.substr(2,2);
        string str;
        cout<<"enter the string";
        getline(cin,str);
        int n =str.length();
        cout<<str.substr(n/2);
}