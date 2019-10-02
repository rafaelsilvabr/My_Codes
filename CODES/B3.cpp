#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> div;
    vector<int> p1,p2;
    int max=sqrt(num);
    for(int c=1;c<=max;c++){
        if(num%c==0){
            div.push_back(c);
            div.push_back(num/c);
        }
    }
    sort(div.begin(),div.end());
    div.erase(unique(div.begin(),div.end()),div.end());

    for(int i=0;i<div.size();i++){
        for(int i2=i+1;i2<div.size();i2++){
            if(div[i]*div[i2]==num){
                p1.push_back(i);
                p2.push_back(i2);
            }
        }
    }
    bool logico = false;
    for(int i=0;i<p1.size();i++){
        for(int i2=i+1;i2<p1.size();i2++){
            if(abs(div[p1[i]]-div[p2[i]]) == div[p1[i2]]+div[p2[i2]] || div[p1[i]]+div[p2[i]] == abs(div[p1[i2]]-div[p2[i2]])){
                logico =true;
                break;
            }
        }
//        cout<<div[p1[i]]<<"*"<<div[p2[i]]<<"=="<<num<<endl;
        if(logico==true){
            break;
        }
    }
    if(logico==true){
        cout<<num<<" eh desagradavel.\n";
    }else{
        cout<<num<<" nao eh desagradavel.\n";
    }

    return 0;
}
