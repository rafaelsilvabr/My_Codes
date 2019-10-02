#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
    char carac;

    cin>>size>>carac;

    for(int i=0;i<size;i++){
        for(int i2=0;i2<=i;i2++){
            cout<<carac;
        }
        cout<<endl;
        if(carac=='Z') carac='A';
        else carac+=1;
    }

    return 0;
}