#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int n = s.length();
    for(int i=0;i<n;i++){
        if(n==1){
            break;// this when we have entered only one element
        }
        if(n==2 && s[0]!=s[1]){
            count = 1;// this is whent 2element are diff but ans should be 1
            break;
        }
        if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1]) count++;
        }
      else if(s[i]!=s[i+1]  && s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<count<<endl;
}