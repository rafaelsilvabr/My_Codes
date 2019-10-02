#include <bits/stdc++.h>

using namespace std;

int main(){
    string carac;
    getline(cin,carac);
    if(next_permutation(carac.begin(),carac.end())){
        cout<<carac<<endl;
    }else{
        cout<<"USELESS"<<endl;
    }
    return 0;
}