#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    vector <vector<int> bin(10,(10,10));


    int i0,i1;
    while(num>=1){
        bin.push_back(bin%2);
        if(bin%2==0) i0++;
        else i1++;
        bin/=2;
    }

    for(int i=0;i<bin.size();i++){
        cout<<bin[i];
    }cout<<endl;



    return 0;
}

