#include <bits/stdc++.h>
using namespace std;

long long v[110],w[110];
long long ans=0;
long long N,W;
//vector<vector<long long>> MEM(100001,vector<long long>(1001,100000));
/*long long dp(long long num,int i){
    if(num<0 || i>=N){
        return 0;
    }
    if(MEM[num][i]!=100000){
        return MEM[num][i];
    }
    long long aux=dp(num,i+1);
    long long res=100010;
    if(-v[i]+w[i]>0){
        res=-v[i]+w[i];
    }
    if(num-v[i]>0){
        res=min(res,num-v[i]);
    }
    if(num-v[i]<0 && -v[i]+w[i]<0){
        res=aux;
    }
    if(res<100010 && res>=0){
        aux=max(1+dp(res,i+1),aux);
    }
    return MEM[num][i]=aux;
}*/
int main(){
    cin>>N;
    long long max_w=0;
    int dp[1010];
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<N;i++){
        cin>>v[i]>>w[i];
    }
    for(int i=0;i<N;i++){
        int atual_wheight=0;
        
    }
  


    return 0;
}
