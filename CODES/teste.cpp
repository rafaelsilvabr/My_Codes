#include <bits/stdc++.h>
using namespace std;

long long v[110],w[110];
long long N,W;
long long MEM[1000000000][100];
long long dp(long long num,int i){
    if(num<0 || i>=N){
        return 0;
    }
    if(MEM[num][i]!=-1){
        return MEM[num][i];
    }
    long long aux=dp(num,i+1);
    if(num>=v[i]){
        aux=max(w[i]+dp(num-v[i],i+1),aux);
    }
    return MEM[num][i]=aux;
}
int main(){
    cin>>N>>W;
    memset(MEM,-1,sizeof(MEM));
    for(int i=0;i<N;i++){
        cin>>v[i]>>w[i];
    }
    cout<<dp(W,0)<<endl;
    return 0;
}
