#include<iostream>
#include<string>
using namespace std;

// void removechar(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
// }


void removeChar(string ans,string orignal,int idx){
    if(idx==orignal.length()){
        cout<<ans;
        return;
    }
    char ch=orignal[idx];
    if(ch=='a') removeChar(ans,orignal,idx+1);
    else removeChar(ans+ch,orignal,idx+1);
}

int main(){
    string str="Chaitanya";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]!='a') s+=str[i];
    }
    cout<<s<<endl;
    // removechar("",str);
    removeChar("",str,0);
}