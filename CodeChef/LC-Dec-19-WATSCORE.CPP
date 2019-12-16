#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        vector<int> max_scores(11,0);
        int n;
        cin>>n;
        int ind_aux,score_aux;
        for(int i2=0;i2<n;i2++){
            cin>>ind_aux>>score_aux;
            max_scores[ind_aux-1]=max(max_scores[ind_aux-1],score_aux);
        }
        int sum=0;
        for(int c=0;c<8;c++){
            sum+=max_scores[c];
        }
        cout<<sum<<endl;
    }
    return 0;
}