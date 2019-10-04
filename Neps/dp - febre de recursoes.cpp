#include<bits/stdc++.h>
using namespace std;

vector<long long> F(1010,-1);
vector<long long> A(1010,-1);
long long m,n,k;
long long mod(long long x){
    return(x%m+m)%m;
}
long long find_f(int num){
    if(F[num]!=-1) return F[num];
    long long f_aux=0;
    for(int i=1;i<=n;i++){
        f_aux=mod(f_aux + A[i]*find_f(num-i));
    }
    return F[num]=f_aux;
}
int main(){
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=n;i++){
        cin>>F[i];
        F[i]=mod(F[i]);
    }
    // for(int i=1;i<=n;i++){
    //     if(F[k]!=0) break;
    //     F[i]=(F[i]+A[i]*F[i-1])%m;
    // }
    // cout<<F[k]<<endl;
    cout<<find_f(k)<<endl;
    return 0;
}
