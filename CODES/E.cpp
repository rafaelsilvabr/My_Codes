#include <bits/stdc++.h>

using namespace std;

int procura_menor(vector <int> V,int p1,int p2){
    int menor;
    menor=V[p1];
    for(p1=p1+1;p1<=p2;p1++){
        if(V[p1]<menor) menor=V[p1];
    }
    return menor;
}
int procura_maior(vector <int> V,int p1,int p2){
    int maior;
    maior=V[p1];
    for(p1=p1+1;p1<=p2;p1++){
        if(V[p1]>maior) maior=V[p1];
    }
    return maior;
}

int main(){
    int m,n,c;
    int p1=0,p2=0,s=0;
    vector <int> N(20);

    cin>>m>>n>>c;
    p2+=n-1;
    for(int i=0;i<m;i++){
        cin>>N[i];
    }

    int maior,menor;
    while(p2<m){
        menor=procura_menor(N,p1,p2);
        maior=procura_maior(N,p1,p2);
        if(maior-menor<=c){
            s++;
        }
        p1++;
        p2++;
    }
    cout<<s<<endl;
    return 0;
}