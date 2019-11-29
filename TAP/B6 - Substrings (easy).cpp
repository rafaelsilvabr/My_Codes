#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    unordered_set<string> ans;
    for(int i=0;i<str.size();i++){
        string aux="";
        aux.push_back(str[i]);
        ans.insert(aux);
        for(int i2=i+1;i2<str.size();i2++){
            aux.push_back(str[i2]);
            ans.insert(aux);
        }
    }
    cout<<ans.size()+1<<endl;
    return 0;
}