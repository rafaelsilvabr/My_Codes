#include <bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2;
    int n1,n2;
    bool valid = true;
    cin>>n1>>n2;
    cin>>str1>>str2;

    int i=0,i2;
    for(i2=0;i2<str2.size();i2++){
        while(i<str1.size()){
            if(str2[i2]==str1[i]){
                str1[i]='0';
                break;
            }
            i++;
        }
        if(i==str1.size()){
            valid = false;
        }
    }
    if(valid==true){
        cout<<"SIM\n";
    }else{
        cout<<"NAO\n";
    }

        

    return 0;
}