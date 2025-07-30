#include <iostream>
using namespace std;
int fact(int x){
    int f =1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}

int combination(int n, int r){
    int ncr=fact(n)/(fact(r)*fact(r));
    return ncr;
}

int permutation(int n, int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}

int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int r;
    cout<<"enter the r";
    cin>>r;
    // int nfact =1;
    //     for(int i=2;i<=n;i++){
    //         nfact*=i;
    //     }
    //     cout<<nfact;
    //     int rfact ;
    //     for(int i=2;i<=r;i++){
    //         rfact*=i;
    //     }
    //     cout<<rfact;

    //     int nrfcat=1; //(n-r)!;
    //     for(int i=2;i<=n-r;i++){
    //         nrfcat*=i;
    //     }




    int nfact= fact(n);
    int rfact= fact(r);
    int nrfact= fact(n-r);
        //int ncr= nfact/(rfact*nrfact);
        int ncr = combination(n,r);
        int npr = premutation(n,r);
        cout<<ncr;
}