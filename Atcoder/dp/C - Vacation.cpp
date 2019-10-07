#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> dp(3,0); //global data
    vector<int> nums(3);
    int K;
    cin>>K;
    for(int i=0;i<K;i++){ //n_days
        for(int c=0;c<3;c++){ //inputs
            cin>>nums[c];
        }
        vector<int> n_dp(3,0); //local data
        for(int j=0;j<3;j++){
            for(int j2=0;j2<3;j2++){
                if(j != j2){ //if the lasted action is diferent that the atual action
                    n_dp[j2] = max(n_dp[j2],dp[j]+nums[j2]); 
                }
            }
        }
        dp=n_dp;
    }
    cout<<max({dp[0],dp[1],dp[2]})<<endl;
    return 0;
}