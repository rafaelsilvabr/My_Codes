#include <bits/stdc++.h>

using namespace std;

int main(){
    int m;
    vector <vector<char>> M(100,vector<char>(100,0));
    vector <vector<int>> Vistos(100,vector<int>(100,0));

    queue <int> coordX;
    queue <int> coordY;

    scanf("%d ",&m);
    for(int i=1;i<=m;i++){
        for(int i2=1;i2<=m;i2++){
            cin>>M[i][i2];
        }if(i<m)scanf(" ");
    }

/*    for(int i=1;i<=m;i++){
        for(int i2=1;i2<=m;i2++){
            printf("%c",M[i][i2]);
        }printf("\n");
    }
*/
    for(int i=1;i<m;i++){
        for(int i2=1;i2<m;i2++){
            if(M[i][i2]=='s'){
                coordX.push(i);
                coordY.push(i2);
                Vistos[i][i2]=-1;
                break;
            }
        }
    }

    coordX.push(-1);
    coordY.push(-1);
    int passos=0;
    int saida;    
    while(1){
        saida=0;

        while(coordX.front()!=-1){

            if(M[coordX.front()+1][coordY.front()] == 'd'||M[coordX.front()-1][coordY.front()] == 'd'||M[coordX.front()][coordY.front()-1] == 'd'||M[coordX.front()][coordY.front()+1] == 'd'){
                saida = 2;
                break;
            }
            
            if(M[coordX.front()+1][coordY.front()] == '-' && Vistos[coordX.front()+1][coordY.front()] != -1){
                coordX.push(coordX.front()+1);
                coordY.push(coordY.front());
                Vistos[coordX.front()+1][coordY.front()]=-1;
                saida=1;
            }
            
            if(M[coordX.front()-1][coordY.front()] == '-' && Vistos[coordX.front()-1][coordY.front()] != -1){
                coordX.push(coordX.front()-1);
                coordY.push(coordY.front());
                Vistos[coordX.front()-1][coordY.front()]=-1;
                saida=1;
            }
        
            if(M[coordX.front()][coordY.front()+1] == '-' && Vistos[coordX.front()][coordY.front()+1] != -1){
                coordX.push(coordX.front());
                coordY.push(coordY.front()+1);
                Vistos[coordX.front()][coordY.front()+1]=-1;
                saida=1;
            }

            if(M[coordX.front()][coordY.front()-1] == '-' && Vistos[coordX.front()][coordY.front()-1] != -1){
                coordX.push(coordX.front());
                coordY.push(coordY.front()-1);
                Vistos[coordX.front()][coordY.front()-1]=-1;
                saida=1;
            }

            coordX.pop();
            coordY.pop();
        }
        if(saida!=1){
            break;
        }
        coordX.pop();
        coordY.pop();
        coordX.push(-1);
        coordY.push(-1);
        passos++;
    }

    if(saida==0){
        cout<<"-1\n";
    }
    if(saida==2){
        cout<<passos+1<<endl;
    }

    return 0;
}
