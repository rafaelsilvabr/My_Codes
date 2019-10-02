#include <bits/stdc++.h>
using namespace std;

bool b_s(int n1,int n2){
    return n1>n2;
}

int main(){
    int i,j;
    vector<vector<int>> M (100 ,vector<int>(100,0));
    vector<int> somas;
    cin>>i>>j;

    for(int c=0 ; c<i ; c++){
        for(int c2=0 ; c2<j ; c2++){
            cin>>M[c][c2];
        }
    }
    queue <int> valores;
    queue <int> coordX;
    queue <int> coordY;

    valores.push(M[0][0]);
    coordX.push(0);
    coordY.push(0);

    valores.push(-1);
    coordX.push(-1);
    coordY.push(-1);

    bool logico=false;
    while(1){
        logico = false;
        while(valores.front()!=-1){
            if(coordX.front()==i-1 && coordY.front()==j-1){
                logico=true;
                break;
            }
//            cout<<"Valor :"<<M[coordX.front()][coordY.front()]<<" Consulta: ";
            if(coordX.front()+1<i){
//                cout<<M[coordX.front()+1][coordY.front()]<<" ";
                valores.push(valores.front()+M[coordX.front()+1][coordY.front()]);
                coordX.push(coordX.front()+1);
                coordY.push(coordY.front());
                if(coordX.front()+1== i-1 && coordY.front()==j-1){
                    somas.push_back(valores.front()+M[coordX.front()+1][coordY.front()]);
                }
//                logico=true;
            }
            if(coordY.front()+1<j){
//                cout<<M[coordX.front()][coordY.front()+1]<<" ";
                valores.push(valores.front()+M[coordX.front()][coordY.front()+1]);
                coordX.push(coordX.front());
                coordY.push(coordY.front()+1);
                if(coordX.front()== i-1 && coordY.front()+1==j-1){
                    somas.push_back(valores.front()+M[coordX.front()][coordY.front()+1]);
                }
//                logico=true;

            }
            valores.pop();
            coordX.pop();
            coordY.pop();
        }
        if(logico==true){
            break;
        }
        valores.pop();
        coordX.pop();
        coordY.pop();

        valores.push(-1);
        coordX.push(-1);
        coordY.push(-1);
    }

/*    for(int c3=0;c3<somas.size();c3++){
        cout<<somas[c3]<<endl;
    }
*/    sort(somas.begin(),somas.end(),b_s);

    cout<<somas[0]<<endl;
    return 0;
}