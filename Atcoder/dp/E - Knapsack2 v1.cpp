#include <bits/stdc++.h>
using namespace std;
 
long long v[110],w[110];
long long N,W;

int main(){
    cin>>N>>W;
    vector<long long> dp(100010,0);
    for(int i=0;i<N;i++){
        long long w,v;
        cin>>w>>v;
        for(int aux_w=W-w;aux_w>=0;aux_w--){
            dp[aux_w+w]=max(dp[aux_w+w],dp[aux_w]+v);
        }
    }
    long long ans=0;
    for(int i=0;i<=W;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}