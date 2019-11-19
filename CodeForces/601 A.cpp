#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        int x=abs(a-b);
        int y=0;
        int count=0;
        bool flag=0;
       // cout<<"x="<<x<<endl;
        
        while(x%5!=0){
            x--;
            y++;
        }
        count=x/5;
        x=y;
        y=0;
        while(x%2!=0){
            x--;
            y++;
        }
        count+=x/2;
        x=y;
        count+=y;

        cout<<count<<endl;
    }


    return 0;
}