#include<bits/stdc++.h>
using namespace std;

typedef struct{
    bool in=false;
    bool out=false;
}Status;
Status employee[1000010];
int arr[1000010];
int day=1;

int newday(int current_operation){//buscar se alguem ainda esta dentro do escritorio e comecar um novo dia
    int i;
    for(i=0;i<current_operation;i++){
        if(employee[arr[i]].in==true && employee[arr[i]].out==false){
            return -1;
        }
        employee[arr[i]].in=false ;employee[arr[i]].out=false;
    }
    day++;
    return 1;
}
int verif(int current_operation){//buscar se alguem ainda esta dentro do escritorio e comecar um novo dia
    int i;
    for(i=0;i<current_operation;i++){
        if(employee[arr[i]].in==true && employee[arr[i]].out==false){
            return -1;
        }
        employee[arr[i]].in=false ;employee[arr[i]].out=false;
    }
    return 1;
}

int main(){
    int n;
    int aux;
    cin>>n;
    int flag=0;
    vector<int> events(100010,0);
    int i;
    for(i=0;i<n;i++){
        cin>>aux;
          if(n%2!=0){
             cout<<-1<<endl;
              flag=1;
              break;
          }
        if(aux>0) arr[i]=abs(aux);
        if(employee[abs(aux)].out==true && aux>0){
            int b=newday(i);
            if(b==-1){
                cout<<-1<<endl;
                flag=1; //deu merda
                break;
            }
        }

        if(employee[abs(aux)].in==true && aux>0){
            cout<<-1<<endl;
            flag=1;
            break;
        }
        if(employee[abs(aux)].out==true && aux<0){
            cout<<-1<<endl;
            flag=1;
            break;
        }

        if(employee[abs(aux)].in==false && employee[abs(aux)].out==false && aux>0){ //insere uma nova pessoa
            employee[abs(aux)].in=true;
            events[day]++;
        }else{
            if(employee[abs(aux)].in==false && employee[abs(aux)].out==false && aux<0){ //se a pessoa sai antes de entrar
                cout<<-1<<endl;
                flag=1; //deumerda
                break;
            }
        }
        if(employee[abs(aux)].in==true && employee[abs(aux)].out==false && aux<0){ //retira uma pessoa 
            employee[abs(aux)].out=true;
            events[day]++;
        }
    }
     int b= verif(i-1);
        if(b==-1 && flag==0){
        cout<<-1<<endl;
        flag=1;
    }

    if(flag==0){
        cout<<day<<endl;
        for(int i=1;i<=day;i++){
            cout<<events[i];
            if(i<day) cout<<" ";
        }cout<<endl;
    }


    return 0;
}