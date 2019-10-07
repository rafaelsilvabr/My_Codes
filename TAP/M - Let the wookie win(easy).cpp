#include <bits/stdc++.h>
using namespace std;

void qtd_horizontal(char M[10][10] , int i , int i2 , int *q_X , int *q_O){
    char aux = M[i][i2+1];
 //   cout<<"aux 1 H: "<<aux<<endl;
    for(int c=i2+1 ; c<=5 ; c++){
        if(M[i][c] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
    aux = M[i][i2-1];
//    cout<<"aux 2 H: "<<aux<<endl;
    for(int c=i2-1 ; c>0 ; c--){
        if(M[i][c] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
}
void qtd_vertical(char M[10][10] , int i , int i2 , int *q_X , int *q_O){
    char aux = M[i+1][i2];
 //   cout<<"aux 1 V: "<<aux<<endl;
    for(int c=i+1 ; c<=5 ; c++){
        if(M[c][i2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
    aux = M[i-1][i2];
//    cout<<"aux 2 V: "<<aux<<endl;
    for(int c=i-1 ; c>0 ; c--){
        if(M[c][i2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
}
void qtd_diagonal_p(char M[10][10] , int i , int i2 , int *q_X , int *q_O){
    char aux = M[i+1][i2+1];
 //   cout<<"aux 1 D1: "<<aux<<endl;
    for(int c=i+1 , c2=i2+1 ; c<=5 && c2<=5 ; c++ , c2++){
        if(M[c][c2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
    aux = M[i-1][i2-1];
 //   cout<<"aux 2 D1: "<<aux<<endl;
    for(int c=i-1 , c2=i2-1 ; c>0 && c2>0 ; c--,c2--){
        if(M[c][c2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
}
void qtd_diagonal_s(char M[10][10] , int i , int i2 , int *q_X , int *q_O){
    char aux = M[i+1][i2-1];
//    cout<<"aux 1 D2: "<<aux<<endl;
    for(int c=i+1 , c2=i2-1 ; c<=5 && c2>0 ; c++ , c2--){
        if(M[c][c2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
    aux = M[i-1][i2+1];
 //   cout<<"aux 2 D2: "<<aux<<endl;
    for(int c=i-1 , c2=i2+1 ; c>0 && c2<=5 ; c--,c2++){
        if(M[c][c2] == aux){
            if(aux=='X'){
                *q_X+=1;
            }
            if(aux=='O'){
                *q_O+=1;
            }
        }else{
            break;
        }
    }
}

int main(){
    char M[10][10];

    for(int i=0;i<10;i++){
        for(int i2=0;i2<10;i2++){
            M[i][i2]=0;
        }
    }
    for(int i=1;i<=5;i++){
        for(int i2=1;i2<=5;i2++){
            scanf("%c ",&M[i][i2]);
        }
    }

 /*   for(int i=1;i<=5;i++){
        for(int i2=1;i2<=5;i2++){
            printf("%c",M[i][i2]);
        }cout<<endl;
    }
*/
    int qtd_xH=0,qtd_oH=0;
    int qtd_xV=0,qtd_oV=0;
    int qtd_xD=0,qtd_oD=0;
    int qtd_xD2=0,qtd_oD2=0;
    int index = -1;

    for(int i=1;i<=5;i++){
        for(int i2=1;i2<=5;i2++){

        qtd_xH=0;qtd_oH=0;
        qtd_xV=0;qtd_oV=0;
        qtd_xD=0;qtd_oD=0;
        qtd_xD2=0;qtd_oD2=0;

            if(M[i][i2]=='*'){

                qtd_horizontal(M,i,i2,&qtd_xH,&qtd_oH);
                qtd_vertical(M,i,i2,&qtd_xV,&qtd_oV);
                qtd_diagonal_p(M,i,i2,&qtd_xD,&qtd_oD);
                qtd_diagonal_s(M,i,i2,&qtd_xD2,&qtd_oD2);

//                cout<<i<<" "<<i2<<endl;

 /*               cout<<qtd_xH<<" "<<qtd_oH<<endl;
                cout<<qtd_xV<<" "<<qtd_oV<<endl;
                cout<<qtd_xD<<" "<<qtd_oD<<endl;
*/
                if(!(qtd_xH >= 3 || qtd_oH >= 3 || qtd_xV >= 3 || qtd_oV >= 3 || qtd_xD >= 3 || qtd_oD >= 3 || qtd_oD2 >=3 || qtd_xD2 >=3)){
                    index = (i-1) * 5 + (i2-1) + 1;
                    break;
                }
            }
        }
        if(index != -1){
            break;
        }
    }

    cout << index << endl;

    return 0;
}