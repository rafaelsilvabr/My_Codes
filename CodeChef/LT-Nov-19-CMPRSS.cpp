#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int loop;
        cin>>loop;
        int arr[110];
        for(int i2=0;i2<loop;i2++){
            cin>>arr[i2];
        }
        int c=0;
        while(c<loop){
            arr[c];
            cout<<arr[c];
            if(c+2<loop){
                if(arr[c]+1 == arr[c+1] && arr[c]+2 == arr[c+2]){
                    int j;
                    cout<<"...";
                    for(j=c+1;j<loop;j++){
                        if(arr[j]+1 != arr[j+1]){
                            cout<<arr[j];
                            break;
                        }
                    }
                    c=j+1;
                }else{
                    c++;
                }
            }else{
                c++;
            }
            if(c<=loop-1) cout<<",";
        }
        cout<<endl;
    }


    return 0;
}