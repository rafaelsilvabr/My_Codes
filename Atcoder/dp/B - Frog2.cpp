#include<bits/stdc++.h>
using namespace std;

int V[100010];
int N,K;
vector<int> mem(100010,1e9+1);

int main(){
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    mem[0]=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<=K;j++){
            if(i+j<N){
                mem[i+j]=min(mem[i+j],mem[i]+abs(V[i]-V[i+j]));
            }
        }
    }
    cout<<mem[N-1]<<endl;
    return 0;
}