#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;
        cin>>size;

        for(int i2=0;i2<size;i2++){
            for(int i3=0;i3<size;i3++){
                if(i2==0||i2==size-1||i3==0||i3==size-1){
                    cout<<'#';
                }else{
                    cout<<'J';
                }
            }
            cout<<endl;
        }

    return 0;
}