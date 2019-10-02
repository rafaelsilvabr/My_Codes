#include<bits/stdc++.h>

using namespace std;

bool palindromo(string str){
    int b;
    for(int i=0,b=str.size()-1;i<b;i++,b--){
        if(str[i]!=str[b])  return false;
    }
    return true;
}

bool sepresente(vector <string> palins,string str){
    for(int c=0;c<palins.size();c++){
        if(str==palins[c]) return true;
    }
    return false;
}

int main(){
    int i=0,i2=0,c;
    string str;
    vector<string> palins;
    cin>>str;
    
    for(c=1;c<=str.size();c++){
        i=0;
        string str2;

        while(i+c<=str.size()){
            str2=str.substr(i,c);
            if(palindromo(str2)==true){
                if(sepresente(palins,str2)==false){
                    palins.push_back(str2);
                }
            }
            i++;
        }
    }

    cout<<palins.size()<<" - ";
    for(c=0;c<palins.size();c++){
        cout<<"\""<<palins[c]<<"\"";
        if(c < palins.size()-1) cout<<" ";
    }
    cout<<endl;

    return 0;
}