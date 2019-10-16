#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]<='Z'){
            str[i]+=32;
        }
    }
   // cout<<str<<endl;
    for(int i=0;i<n;i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y'){
            if(str[i]>='a' && str[i]<='z'){
                cout<<'.'<<str[i];
            }else{
                cout<<str[i];
            }
        }
    }cout<<endl;
    return 0;
}