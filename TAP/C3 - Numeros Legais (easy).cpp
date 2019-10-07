#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;

/*
    vector<int> quadrados_cubos;
    for(long long i=a ; i <= sqrt(b)+1 ; i++){
        quadrados_cubos.push_back(i*i);
    }
    for(long long c=a ; c <= cbrt(b)+1 ; c++){
        quadrados_cubos.push_back(c*c*c);
    }
    sort(quadrados_cubos.begin(),quadrados_cubos.end());

    vector<int> legais (1000000001,0);
    for(int i=0;i<quadrados_cubos.size();i++){
        legais[quadrados_cubos[i]]+=1;
        if(legais[quadrados_cubos[i]]==2){
            cout<<quadrados_cubos[i]<<",";
        }
    }
*/
    vector<long long> legais={1,64,729,4096,15625,46656,117649,262144,531441,1000000,1771561,2985984,4826809,7529536,11390625,16777216,24137569,34012224,47045881,64000000,85766121};
    int counter=0;
    for(int i=0;i<legais.size();i++){
        if(legais[i]>=a && legais[i]<=b){
            counter++;
        }
    }
    cout<<counter<<endl;

    return 0;
}