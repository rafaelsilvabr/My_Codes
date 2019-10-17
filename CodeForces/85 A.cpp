#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    char str1[110],str2[110];
    memset(str1,0,110);
    memset(str2,0,110);
    cin>>str1>>str2;

    int n=strlen(str1)+1;
    for(int i=0;i<n;i++){
        if(str1[i]<='Z'){
            str1[i]+=32;
        }
        if(str2[i]<='Z'){
            str2[i]+=32;
        }
    }
    int d=strcmp(str1,str2);
    if(d>0){
        cout<<"1\n";
    }
    if(d<0){
        cout<<"-1\n";
    }
    if(d==0){
        cout<<"0\n";
    }
    return 0;
}