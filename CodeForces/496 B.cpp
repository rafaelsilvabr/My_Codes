#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);

    int p_a=a.size(),p_b=b.size();

    int flag=0;
    while(a[p_a]==b[p_b]){
        p_a--;
        p_b--;
    }
    if(p_a<0 && p_b<0){
        cout<<0<<endl;
    }else{
        cout<<(p_a+1)+(p_b+1)<<endl;
    }
    return 0;
}