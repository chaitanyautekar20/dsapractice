#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string str="Raghav";
    // cout<<str.size();// both are same
    //   cout<<str.length();// bot are same
    //   //index are from 0 to str.length()-1


    // string str="abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;
    // str.pop_back();
    //  cout<<str<<endl;


    // string s = "abc";
    // cout<<s<<endl;
    // string t="efg";
    // s=s+t;
    // cout<<s<<endl;

    string s="abcdef";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;



}