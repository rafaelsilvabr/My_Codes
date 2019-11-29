#include<bits/stdc++.h>
using namespace std;

void permutations(string str){
    bool bl=next_permutation(str.begin(),str.end());
    if(bl==false){
        return;
    }
    permutations(str);
    cout<<str<<endl;
}

int main(){
    int lenght,n_act;
    cin>>lenght>>n_act;
    string str="";
    for(int i=0;i<lenght;i++){
        if(i<(lenght-n_act)) str+='0';
        else str+='1';
    }   
    permutations(str);
    cout<<str<<endl;
    return 0;
}