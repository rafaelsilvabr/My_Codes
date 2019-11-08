#include<bits/stdc++.h>
using namespace std;
string lines[10];
string matrix[10][9];
int ans[10][9];

int getValue(string str,char C,char j){
    if(str[0]>=0 && str[1]<=9){
        int num=0,size=str.size();
        int pot=1;
        while(size>0){
            num=(str[size-1]-'0')*pot;
            pot*=10;
            size--;
        }
        cout<<"p1: "<<num<<"\n";
        return num;
    }else{
        cout<<"p2="<<str[0]<<" "<<str[1]<<endl;
        if(str[0]-'A'==C && str[1]-'0'==j){
            return -1;
        }
        vector<string>aux(9,"aa");
        istringstream ss(str);
        int a;
        int i=0;
        while(getline(ss,aux[i],'+')){
            i++;
        }
        for(int i2=0;i2<i;i2++){
            cout<<"|"<<aux[i]<<" ";
        }cout<<endl;
        int n_ans=0;int f_aux=0;
        for(int i2=0;i2<i;i2++){
            int a=aux[i][0]-'A'; int b=aux[i][1]-'0';
            n_ans = getValue(matrix[a][b],C,j);
            if(n_ans==-1){
                return -1;
            }else{
                f_aux+=n_ans;
            }
        }
        return f_aux;
    }
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
            cout<<ans[i][i2]<<" ";
        }cout<<endl;
    }
    return 0;
}