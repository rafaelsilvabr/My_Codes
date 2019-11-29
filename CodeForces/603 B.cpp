#include<bits/stdc++.h>
using namespace std;
vector<string> pins(11);

bool check_diff(int n_pins){
    unordered_set <string> s;
    for(int i=0;i<n_pins;i++){
        s.insert(pins[i]);
    }
    if(s.size()==1){
        return false;
    }
    return true;
}


int main(){
    int n,n_pins;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>n_pins;
        for(int i2=0;i2<n_pins;i2++){
            cin>>pins[i2];
            int count=0;
            while(!check_diff(n_pins)){
                


            }
        }
    }

    return 0;
}