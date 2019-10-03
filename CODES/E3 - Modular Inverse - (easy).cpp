#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,m;

    cin>>x>>m;
    bool logico=false;
    for(int i=1;i<m;i++){
        if((x*i)%m==1){
            cout<<i<<endl;
            logico=true;
            break;
        }
    }
    if(logico==false){
        cout<<"Nao existe este tipo de inteiro."<<endl;
    }

    return 0;
}
