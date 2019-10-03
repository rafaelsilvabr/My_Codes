#include <bits/stdc++.h>

using namespace std;

int main(){
    char roubo[210];
    string str[210];
    int c,i;

    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>roubo[j]>>str[j];
    }

/*    for(int j=0;j<n;j++){
        cout<<roubo[j]<<str[j]<<endl;
    }
*/
    int j;
    for(j=0;j<n;j++){
        if(roubo[j]=='V'){
            break;
        }
    }
    for(c=str[j].size();c>0;c--){
        i=0;
        string str2;
        int validation=0;
        while(i+c<=str[j].size()){
            str2=str[j].substr(i,c);
            validation=0;
           // cout<<"str2: "<<str2<<endl;
            for(int c2=0;c2<n;c2++){
                int posicao = str[c2].find(str2);

          //      cout<<roubo[c2]<<str[c2]<<" Encontrado : "<<posicao<<endl;

                if(posicao>=0 && posicao<=str[c2].size()){
                    if(roubo[c2]=='V'){
                        validation+=1;
                    }
                }else{
                    if(roubo[c2]=='F'){
                        validation+=1;
                    }
                }
            }
            if(validation>=n){
                cout<<str2<<endl;
                break;
            }
            i++;
        }
        if(validation>=n){
            break;
        }
    }

    return 0;
}