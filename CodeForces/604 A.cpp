#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> str;
    for(int i=0;i<n;i++){
        string aux;
        cin>>aux;
        str.push_back(aux);
    }
    char c[3]={'a','b','c'};
    for(int i=0;i<n;i++){
        int i2;
        for(i2=0;i2<str[i].size();i2++){
            if(i2<str[i].size()-1 && str[i][i2]!='?'){
                if(str[i][i2]==str[i][i2+1]){
                    cout<<"-1"<<endl;
                    break;
                }
            }
            if(str[i][i2]=='?'){
                for(int j=0;j<3;j++){
                    if(c[j]!=str[i][i2-1] && c[j]!=str[i][i2+1]){
                        str[i][i2]=c[j];
                    }
                }
            }
        }
        if(i2>=str[i].size()) cout<<str[i]<<endl;
    }



    return 0;
}