#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>arr;
        map<int,int> numb;
        for(int c=0;c<n;c++){
            int aux;
            cin>>aux;
            arr.push_back(aux);
            numb[aux]++;
        }
        int count=0;
        for(int c=0;c<n;c++){
            int x=arr[c]/(arr[c]-1);
            //cout<<"arr:"<<arr[c]<<" x:"<<x<<endl;
            if(!(numb.find(x)==numb.end())){
                if(x==arr[c] && numb[x]>1){
                    count+=numb[x]-1;
                }
                if(x!=arr[c]){
                    count++;
                }
            }
        }
        cout<<count/2<<endl;
    }



    return 0;
}