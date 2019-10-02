#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int i=1;
    char aux;
    cin>>s;
    cout<<s[0];
    aux=s[0];
    while(i<s.size()){
        if(s[i]!=aux){
            cout<<s[i];
            aux=s[i];
        }
        i++;
    }
    cout<<endl;
    return 0;
}