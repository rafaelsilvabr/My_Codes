#include<bits/stdc++.h>
using namespace std;
string ans[20];
static int n_ans=0;
int N=8;

void print_board(char board[15][15]){
    for(int i=0;i<N;i++){
        for(int i2=0;i2<N;i2++){
            printf("%c",board[i][i2]);
        }printf("\n");
    }printf("\n");
}

bool livre(char board[15][15],int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < col; i++) 
        if (board[row][i]=='q') 
            return false;
    for (i = col+1; i < N; i++) 
        if (board[row][i]=='q') 
            return false;   

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]=='q') 
            return false; 
    for (i = row+1, j = col+1; i <N  && j < N; i++, j++) 
        if (board[i][j]=='q') 
            return false; 

    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]=='q') 
            return false; 
    for (i = row-1, j = col+1; j < N  && i >= 0; i--, j++) 
        if (board[i][j]=='q') 
            return false; 

    return true; 
} 

bool resolve_board(char board[15][15],int inicio,int colunas){
    
    if(colunas>=N){
        //print_board(board);
        n_ans++;
        return false;
    }
    for(int i=0;i<N;i++){
        if(board[i][(inicio+colunas%N)]=='.'){
            if(livre(board,i,(inicio+colunas)%N)){
                board[i][(inicio+colunas)%N]='q';
                if(resolve_board(board,inicio,colunas+1)){
                    return true;
                }
                board[i][(inicio+colunas)%N]='.';
            }
        }
    }
    return false;
}

int main(){
    int cont=0;
    while(cin>>N){
        if(N==0) return 0;
        getchar();
        char board[15][15];
        for(int i=0;i<N;i++){
           for(int i2=0;i2<N;i2++){
               scanf("%c",&board[i][i2]);
           } getchar();
        }

        for(int i=0;i<N;i++){
            int flag=0;
            if(board[i][0]=='*') flag=1;
            else board[i][0]='q';
            resolve_board(board,0,1);
            if(flag!=1) board[i][0]='.';
            flag=0;
        }
        cout<<"Case "<<cont+1<<": "<<n_ans<<endl;
        n_ans=0;
        cont++;
    }
    return 0;
}