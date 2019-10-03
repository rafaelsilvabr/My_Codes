#include <bits/stdc++.h>

using namespace std;

int main(){
    int i;
    cin>>i;
    vector<int> div;
    int max=sqrt(i);
    for(int c=1;c<=max;c++){
        if(i%c==0){
            div.push_back(c);
            div.push_back(i/c);
        }
    }
    sort(div.begin(),div.end());
    div.erase(unique(div.begin(),div.end()),div.end());

    int soma=0;
    for(int c=0;c<div.size()-1;c++){
//        cout<<div[c]<<" ";
        soma+=div[c];
    }
    if(soma<i){
        cout<<i<<" eh um numero deficiente.\n";
    }
    if(soma==i){
        cout<<i<<" eh um numero perfeito.\n";
    }
    if(soma>i){
        cout<<i<<" eh um numero abundante.\n";
    }

    return 0;
}