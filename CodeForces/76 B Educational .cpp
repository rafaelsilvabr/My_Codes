#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"YES";
        }
        else{
            if(a>3){
                cout<<"YES";
            }else{
                if(a>1 && b<=3){
                    cout<<"YES";
                }else{
                    cout<<"NO";
                }
            }            
        }
        cout<<endl;
   }
    return 0;
}