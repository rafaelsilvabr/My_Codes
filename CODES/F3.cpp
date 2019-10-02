#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    if(n==0){
        cout<<0<<endl;
    }else{
    int raz_int=n/d;
    n=n-raz_int*d;

    int mdc=__gcd(n,d);
    n/=mdc;
    d/=mdc;
    if(raz_int>0){
        cout<<raz_int;
    }
    if(raz_int>0 && n>0){
        cout<<" ";
    }
    if(n>0){
        cout<<n<<"/"<<d;
    }cout<<endl;
    }

    return 0;
}