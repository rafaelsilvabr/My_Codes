#include<bits/stdc++.h>
using namespace std;
string ans[20];
static int n_ans=0;
void print_board(int board[8][8]){
    for(int i=0;i<8;i++){
        for(int i2=0;i2<8;i2++){
            if(board[i][i2]==1){
                ans[n_ans]+=(char)(i2+1+'0');
                if(i<7) ans[n_ans]+=" ";
            }
        }
    }
}
int N=8;
bool livre(int board[8][8],int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false;
    for (i = col+1; i < 8; i++) 
        if (board[row][i]) 
            return false;   

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; 
    for (i = row+1, j = col+1; i <8  && j < 8; i++, j++) 
        if (board[i][j]) 
            return false; 

    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
    for (i = row-1, j = col+1; j < 8  && i >= 0; i--, j++) 
        if (board[i][j]) 
            return false; 

    return true; 
} 

bool resolve_board(int board[8][8],int inicio,int colunas){
    
    if(colunas>=8){
        print_board(board);
        n_ans++;
        return false;
    }
    for(int i=0;i<8;i++){
        if(livre(board,i,(inicio+colunas)%8)){
            board[i][(inicio+colunas)%8]=1;
            if(resolve_board(board,inicio,colunas+1)){
                return true;
            }
            board[i][(inicio+colunas)%8]=0;
        }
    }
    return false;
}

bool all_resolve_board(int board[8][8],int inicio,int colunas){



}


int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
    int board[8][8] = { { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 },
                        { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 0, 0, 0 }}; 
        pair<int,int> Queen;
        cin>>Queen.first>>Queen.second;
        board[Queen.first-1][Queen.second-1]=true;
        resolve_board(board,Queen.second-1,1);

        cout<<"SOLN       COLUMN"<<endl;
        cout<<" #       1 2 3 4 5 6 7 8"<<endl;
        int j=0;
        for(int c=n_ans-1;c>=0;c--){
            j++;
            cout<<" "<<j<<"       ";
            cout<<ans[c]<<endl;
            ans[c]="";
        }
        n_ans=0;
    }
//    print_board(board);


    return 0;
}