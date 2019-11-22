#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    vector<int> ans(100010,0);
    int aux; int aux_a; int count=1;
    cin>>aux_a;
    for(int i=1;i<n;i++){
        cin>>aux;
        if(aux>aux_a){
            count++;
        }else{
            ans[c]=count;
            count=1;
            c++;
        }
        aux_a=aux;
    }
    if(ans[c]==0) ans[c]=count;

    c++;
    cout<<c<<endl;
    for(int i=0;i<c;i++){
        cout<<ans[i];
        if(i<c-1) cout<<" ";
    }cout<<endl;


    return 0;
}