#include<bits/stdc++.h>
using namespace std;

int V[100010];
int N;
vector<int> mem(100010,-1);
int dp(int i){
    if(i>=N-1){
        return 0;
    }
    if(mem[i]!=-1){
        return mem[i];
    }
    return mem[i]=min(abs(V[i]-V[i+1])+dp(i+1),abs(V[i]-V[i+2])+dp(i+2));
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    int ans=dp(0);
    cout<<ans<<endl;
    return 0;
}