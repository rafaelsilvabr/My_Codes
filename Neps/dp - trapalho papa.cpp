#include <bits/stdc++.h>
using namespace std;

long long v[110],w[110];
long long N,W;
long long MEM[1010][1010];
long long dp(long long num,int i){
    if(num<0 || i>=N){
        return 0;
    }
    if(MEM[num][i]!=-1){
        return MEM[num][i];
    }
    long long aux=dp(num,i+1);
    if(num+w[i]>=v[i]){
        aux=max(1+dp(num-v[i]+w[i],i+1),aux);
    }
    return MEM[num][i]=aux;
}
int main(){
    cin>>N;
    memset(MEM,-1,sizeof(MEM));
    for(int i=0;i<N;i++){
        cin>>v[i]>>w[i];
    }
    cout<<dp(0,0)<<endl;
    return 0;
}
