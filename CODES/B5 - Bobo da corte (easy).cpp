#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int V[10010];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    int aux=V[0];
    sort(V,V+N);
    if(aux>=V[N-1]){
        cout<<"S\n";
    }else{
        cout<<"N\n";
    }
    return 0;
}