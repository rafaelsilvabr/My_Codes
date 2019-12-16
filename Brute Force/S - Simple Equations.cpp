#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int x;
        int flag=0;
        for(x=-100;x<=100;x++){
            flag=0;
            for(int y=-100;y<=100;y++){
                int z=a-(x+y); 
                if(x*y*z == b && (x*x + y*y + z*z) == c && (x!=y && y!=z && x!=z)){
                    cout<<x<<" "<<y<<" "<<z<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==0){
            cout<<"No solution.\n";
        }
    }


    return 0;
}