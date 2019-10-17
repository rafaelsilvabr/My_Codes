#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        if(str.size()>10){
            cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
        }else{
            cout<<str<<endl;
        }
    }
    return 0;
}
