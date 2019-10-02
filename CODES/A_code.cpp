
#include <bits/stdc++.h>

using namespace std;

int main(){
    int loop;
    cin>>loop;

    for(int i=0;i<loop;i++){
        long long a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        long long dif=abs(a[0]-a[1]);
        if(dif>=a[2]){
            if(a[0]<=a[1]){
                a[0]+=a[2];
                cout<<a[0]<<endl;
            }else{
                a[1]+=a[2];
                cout<<a[1]<<endl;
            }
        }else{
            if(dif<a[2]){
                if(a[0]<=a[1]){
                    a[0]+=dif;
                    a[2]-=dif;
                    a[2]/=2;
                    a[0]+=a[2];
                    cout<<a[0]<<endl;
                }else{
                    a[1]+=dif;
                    a[2]-=dif;
                    a[2]/=2;
                    a[1]+=a[2];
                    cout<<a[1]<<endl;
                }
            }
        }
    }


    return 0;
}

