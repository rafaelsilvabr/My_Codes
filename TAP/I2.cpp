#include <bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2;
    int counter=0,aux1,aux2;
    cin>>str1>>str2;
    for(int i=0;i<str1.size();i++){
        if(str1[i]>=str2[i]){
            aux1=str1[i]-str2[i];
            str2[i]+=26;
            aux2=str2[i]-str1[i];
            if(aux1<aux2){
                counter+=aux1;
            }else{
                counter+=aux2;
            }
        }else{
            if(str2[i]>str1[i]){
                aux1=str2[i]-str1[i];
                str1[i]+=26;
                aux2=str1[i]-str2[i];
                if(aux1<aux2){
                    counter+=aux1;
                }else{
                    counter+=aux2;
                }
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}