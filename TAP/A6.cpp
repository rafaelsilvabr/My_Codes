#include<bits/stdc++.h>
using namespace std;
string lines[10];
string matrix[10][9];
int ans[10][9];
vector<vector<int>> mem(10,vector<int>(9,-2));

int getValue(string str,int C,int j){
    if(str[0]>='0' && str[0]<='9'){
        int pot=1,num=0;
        int k=str.size()-1;
        while(k>=0){
            num+=(str[k]-'0')*pot;
            pot*=10;
            k--;
        }
        mem[C][j]=num;
        return num;
    }
    // cout<<"search for matrix["<<C<<"]["<<j<<"]"<<endl;
    // cout<<"mem"<<mem[C][j]<<endl;

    if(mem[C][j]>-2){
        return mem[C][j];
    }
    istringstream ss(str);
    string aux[10]; int i=0;
    while(getline(ss,aux[i],'+')){
        i++;
    }
    int num=0;
    mem[C][j]=-1;
    for(int i2=0;i2<i;i2++){
        int i_aux;
        int a=aux[i2][0]-'A', b=aux[i2][1]-'1';
        i_aux=getValue(matrix[a][b],a,b);
        if(i_aux==-1){
            return -1;
        }
        num+=i_aux;
    }
    mem[C][j]=num;
    return num;
}
int main(){

    for(int i=0;i<10;i++){
        for(int i2=0;i2<9;i2++){
            if(i2<8) getline(cin,matrix[i][i2],' ');
            else getline(cin,matrix[i][i2]);
        }
    }

    for(int i=0;i<10;i++){
        for(int i2=0;i2<9;i2++){
            ans[i][i2]=getValue(matrix[i][i2],i,i2);
        }
    }    

    for(int i=0;i<10;i++){
        for(int i2=0;i2<9;i2++){
            if(mem[i][i2]==-1) cout<<"*";
            else cout<<mem[i][i2];
            if(i2<8) cout<<" ";
        }cout<<endl;
    }
    return 0;
}