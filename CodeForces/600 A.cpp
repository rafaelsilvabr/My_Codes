#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a[100010],b[100010];
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int dif_aux=-1;
        for(int i2=0;i2<n;i2++){
            cin>>a[i2];
        }
        for(int i2=0;i2<n;i2++){
            cin>>b[i2];
        }
        int i2;
        int flag=0;
        for(i2=0;i2<n;i2++){
             //   cout<<dif_aux<<" "<<a[i2]<<" "<<b[i2]<<endl;
            if(dif_aux!=-1){
                if(a[i2]==b[i2]){
                    flag=1;
                }
                if(b[i2]-a[i2] != dif_aux && flag==0){
                    cout<<"NO"<<endl;
                    break;
                }
                if(flag==1 && b[i2]!=a[i2]){
                    cout<<"NO"<<endl;
                    break;
                }
            }else{
                if(a[i2]!=b[i2] && b[i2]-a[i2]>0){
                dif_aux=b[i2]-a[i2];
                }else{
                    if(a[i2]!=b[i2]){
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
        }
        if(i2==n) cout<<"YES"<<endl;
    }


    return 0;
}