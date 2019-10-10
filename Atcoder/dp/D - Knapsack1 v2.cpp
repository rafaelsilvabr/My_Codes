#include <bits/stdc++.h>
using namespace std;
 
long long v[110],w[110];
long long N,W;

int main(){
    cin>>N>>W;
    vector<long long> mem(100010,0);
    for(int i=0;i<N;i++){
        long long w,v;
        cin>>w>>v;
        for(int peso_atual=W-w;peso_atual>=0;peso_atual--){
            mem[peso_atual+w]=max(mem[peso_atual+w],mem[peso_atual]+v);
        }
    }
    long long ans=0;
    for(int i=0;i<=W;i++){
        ans=max(ans,mem[i]);
    }
    cout<<ans<<endl;
    return 0;
}