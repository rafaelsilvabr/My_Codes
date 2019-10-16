#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> numbers;
    vector<int> N;
    int aux;
    int d;
    cin>>d;
    for(int i=0;i<d;i++){
        cin>>aux;
        numbers.insert(aux);
    }
    if(numbers.size()>3){
        cout<<-1<<endl;
        return 0;
    }else{
        for(auto a=numbers.begin();a!=numbers.end();a++){
            N.push_back(*a);
        }
    }
    sort(N.begin(),N.end());
    int i=102;
        if(N.size()==2){
            i=(abs(N[1]-N[0]));
            if(i%2==0)
                i/=2;
        }
        if(N.size()==3){
            if(N[1]-N[0]==N[2]-N[1]){
                i=N[1]-N[0];
            }
        }
        if(N.size()==1){
            i=0;
        }
    if(i<101){
        cout<<i<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}