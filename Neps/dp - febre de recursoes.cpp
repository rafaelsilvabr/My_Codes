#include<bits/stdc++.h>
using namespace std;

vector<long long> F(1010,-1);
vector<int> A(1010,-1);
int m,n,k;
int find_f(int num){
    if(F[num]!=-1) return F[num];
    long long f_aux=0;
    for(int i=1;i<=n;i++){
        f_aux=(f_aux + A[i]*find_f(num-i)%m);
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
    }
    cout<<find_f(k)<<endl;
    return 0;
}
