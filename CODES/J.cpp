#include <bits/stdc++.h>
#define TRUE 1
#define FALSE 0

using namespace std;

typedef struct{
    int x,y;
    double dist_s;
}Coord;

int main(){
    int k;
    string M[1000];

    cin>>k;
    getchar();
    for(int i=0;i<k;i++){
        getline(cin,M[i]);
    }

    ///procurar o s
    Coord s;
    for(int i=0;i<k;i++){
        for(int i2=0;i2<k;i2++){
            if(M[i][i2]=='s'){
                s.x=i;
                s.y=i2;
                s.dist_s=0;
            }
        }
    }

    ///procurar p mais próximo
    Coord p,p_aux;
    p.dist_s=9999999;
    for(int i=0;i<k;i++){
        for(int i2=0;i2<k;i2++){
            if(M[i][i2]=='p'){
                p_aux.x=i;
                p_aux.y=i2;

                //calc distancia
                p_aux.dist_s=sqrt(pow(abs(s.x-p_aux.x),2)+pow(abs(s.y-p_aux.y),2));

                if(p_aux.dist_s<p.dist_s){
                    p=p_aux;
                }
            }
        }    
    }
    printf("(%d,%d):",s.x,s.y);
    printf("(%d,%d):%.2lf\n",p.x,p.y,p.dist_s);
    return 0;
}

