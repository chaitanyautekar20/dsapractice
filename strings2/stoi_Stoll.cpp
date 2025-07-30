#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str ="123456";
    int x =stoi(str);
    cout<<x+1<<endl;

    int a =123456;
    string s = to_string(a);
    cout<<s<<endl;

    //stoll
    string st ="1234567891234";
    long long t =stoll(st);
    cout<<t;
}