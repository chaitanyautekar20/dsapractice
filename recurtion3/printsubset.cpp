#include<iostream>
#include<vector>
#include<string>
using namespace std;

// void printSub(string ans,string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=original[0];
//     printSub(ans+ch,original.substr(1));
//     printSub(ans,original.substr(1));
// }

void storSub(string ans,string original,vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    storSub(ans+ch,original.substr(1),v);
    storSub(ans,original.substr(1),v);
}

int main(){
    string str="abc";
    vector<string> v;
    storSub("",str,v);
    // printSub("",str);
    for(string ele:v){
        cout<<ele<<endl;
    }
}