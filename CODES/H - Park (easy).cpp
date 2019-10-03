#include <bits/stdc++.h>
#define TRUE 1
#define FALSE 0

using namespace std;

typedef struct{
    int x,y;
    int vista = 0;
}Coord;

typedef struct{
    int colunas[50];
    int n=0;
}Colunas;

bool sort_x(Coord A,Coord B){
    return A.x<B.x;
}
bool sort_y(Coord A,Coord B){
    return A.y<B.y;
}

int sepresente(Colunas C1,int num){
    for(int i=0;i<C1.n;i++){
        if(C1.colunas[i]==num){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n,m;
    Coord Arvore[100];
    char coordenada;
    int numb;
    int i,i2=0,i3,path;
    cin>>n>>m;

    for(i=0;i<n;i++){
        cin>>Arvore[i].x>>Arvore[i].y;
    }

    int num_vistos=0;

    for(i=0;i<m;i++){
        scanf(" %c=%d",&coordenada,&numb);
        Colunas C1;
        if(coordenada=='x'){
            sort(Arvore,Arvore+n,sort_x);
            for(path=0;path<n;path++){
                if(Arvore[path].x>numb){
                    break;
                }
            }
            ///up
            C1.n=0;
            for(i2=path-1;i2>=0;i2--){
                if(sepresente(C1,Arvore[i2].y)==0){
                    Arvore[i2].vista++;
                    C1.colunas[C1.n]=Arvore[i2].y;
                    C1.n++;
                }
            }
            ///down
            C1.n=0;
            for(i2=path;i2<n;i2++){
                if(sepresente(C1,Arvore[i2].y)==0){
                    Arvore[i2].vista++;
                    C1.colunas[C1.n]=Arvore[i2].y;
                    C1.n++;
                }
            }
        }

        if(coordenada=='y'){
            sort(Arvore,Arvore+n,sort_y);
            for(path=0;path<n;path++){
                if(Arvore[path].y>numb){
                    break;
                }
            }
            ///up
            C1.n=0;
            for(i2=path-1;i2>=0;i2--){
                if(sepresente(C1,Arvore[i2].x)==0){
                    Arvore[i2].vista++;
                    C1.colunas[C1.n]=Arvore[i2].x;
                    C1.n++;
                }
            }
            ///down
            C1.n=0;
            for(i2=path;i2<n;i2++){
                if(sepresente(C1,Arvore[i2].x)==0){
                    Arvore[i2].vista++;
                    C1.colunas[C1.n]=Arvore[i2].x;
                    C1.n++;
                }
            }
        }
    }

    int mem=0;
    for(int c=0;c<n;c++){
        if(Arvore[c].vista!=0){
            mem++;
        }
    }
    cout<<mem<<endl;

    return 0;
}