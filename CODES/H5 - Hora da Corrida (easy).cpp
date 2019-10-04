#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N,V;
    cin>>N>>V;
    N=N*V;
    for(long long i=10;i<100;i+=10){
        long long aux = N*i;
//        cout<<"|"<<aux<<" ";
        cout<<((aux+99)/100);
 //       cout<<"|";
        if(i<90) cout<<" ";
    }cout<<endl;
    return 0;
}