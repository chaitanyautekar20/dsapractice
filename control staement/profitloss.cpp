#include <iostream>
using namespace std;
int main(){
    int cp;
    int sp;
    cout<<"enter the cp and sp";
    cin>>cp>>sp;
    if (sp>cp){
        cout<<"profit"<<sp-cp;

    }
    if(sp==cp){
        cout<<"no p and l";
    }
    if(cp>sp) {
        cout<<"loss"<<sp-cp;
    }
}