#include<bits/stdc++.h>
using namespace std;

int V[100010];
int N;
vector<int> mem(100010,1e9+1);

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    mem[0]=0;
    for(int i=0;i<N;i++){
        for(int j:{i+1,i+2}){
            if(j<N){
                mem[j]=min(mem[j],mem[i]+abs(V[i]-V[j]));
            }
        }
    }
    cout<<mem[N-1]<<endl;
    return 0;
}