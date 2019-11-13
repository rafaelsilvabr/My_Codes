#include<bits/stdc++.h>
using namespace std;

int calc_dist(int a,int b){
    return abs(b-a);
}

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b){
            while(a<n && x>0){
                a++;
                x--;
            }
            while(b>1 && x>0){
                b--;
                x--;
            }
        }else{
            while(b<n && x>0){
                b++;
                x--;
            }
            while(a>1 && x>0){
                a--;
                x--;
            }
        }
        cout<<calc_dist(a,b)<<endl;
    }
    return 0;
}