#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int aux;
        cin>>aux;
        vector<int> div;
        div.push_back(0);
        int max=sqrt(aux);
        for(int c=1;c<=max;c++){
            div.push_back(c);
            div.push_back(aux/c);
        }
        sort(div.begin(),div.end());
        div.erase(unique(div.begin(),div.end()),div.end());
        
        cout<<div.size()<<endl;
        for(int i2=0;i2<div.size();i2++){
            cout<<div[i2];
            if(i2<div.size()-1) cout<<" ";
        }cout<<endl;
    
    }
    return 0;
}