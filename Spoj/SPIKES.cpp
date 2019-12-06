// admitting only one input '@' and that we always have a treasure iside the maze


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r,s;
    char matrix[45][45];
    queue <pair<pair<int,int>,int>> q;
    cin>>r>>c>>s;
    getchar();
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            scanf("%c",&matrix[i][j]);
            pair <pair<int,int>,int> aux; aux.first.first=i; aux.first.second=j; aux.second=0;
            if(matrix[i][j]=='@') q.push(aux); 
        }getchar();
    }
    vector<vector<bool>> seen(45,vector<bool>(45,0));
    int min_spikes=1e9+1;    
    while(q.size()>0){
        pair<pair<int,int>,int> aux;
        aux=q.front();
        q.pop();   
        seen[aux.first.first][aux.first.second]=true;
        
        //down
        if(matrix[aux.first.first+1][aux.first.second]=='.' && seen[aux.first.first+1][aux.first.second]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first+1; aux2.first.second=aux.first.second; aux2.second=aux.second;
            q.push(aux2);
        }
        if(matrix[aux.first.first+1][aux.first.second]=='s' && seen[aux.first.first+1][aux.first.second]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first+1; aux2.first.second=aux.first.second; aux2.second=aux.second+1;
            q.push(aux2);
        }
        if(matrix[aux.first.first+1][aux.first.second]=='x'){
            if(aux.second*2 < min_spikes) min_spikes=aux.second*2;
        }

        //up
        if(matrix[aux.first.first-1][aux.first.second]=='.' && seen[aux.first.first-1][aux.first.second]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first-1; aux2.first.second=aux.first.second; aux2.second=aux.second;
            q.push(aux2);
        }
        if(matrix[aux.first.first-1][aux.first.second]=='s' && seen[aux.first.first-1][aux.first.second]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first-1; aux2.first.second=aux.first.second; aux2.second=aux.second+1;
            q.push(aux2);
        }  
        if(matrix[aux.first.first-1][aux.first.second]=='x'){
            if(aux.second*2 < min_spikes) min_spikes=aux.second*2;
        }      

        //right
        if(matrix[aux.first.first][aux.first.second+1]=='.' && seen[aux.first.first][aux.first.second+1]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first; aux2.first.second=aux.first.second+1; aux2.second=aux.second;
            q.push(aux2);
        }
        if(matrix[aux.first.first][aux.first.second+1]=='s' && seen[aux.first.first][aux.first.second+1]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first; aux2.first.second=aux.first.second+1; aux2.second=aux.second+1;
            q.push(aux2);
        }
        if(matrix[aux.first.first][aux.first.second+1]=='x'){
            if(aux.second*2 < min_spikes) min_spikes=aux.second*2;
        }

        //left
        if(matrix[aux.first.first][aux.first.second-1]=='.' && seen[aux.first.first][aux.first.second-1]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first; aux2.first.second=aux.first.second-1; aux2.second=aux.second;
            q.push(aux2);
        }
        if(matrix[aux.first.first][aux.first.second-1]=='s' && seen[aux.first.first][aux.first.second-1]==false){
            pair<pair<int,int>,int> aux2;
            aux2.first.first=aux.first.first; aux2.first.second=aux.first.second-1; aux2.second=aux.second+1;
            q.push(aux2);
        }
        if(matrix[aux.first.first][aux.first.second-1]=='x'){
            if(aux.second*2 < min_spikes) min_spikes=aux.second*2;
        }
    } 
    if(min_spikes>s){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<"SUCCESS"<<endl;
    }
    return 0;
}
