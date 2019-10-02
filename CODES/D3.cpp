#include<bits/stdc++.h>

using namespace std;
#define int long long
int32_t main(){
    int i; 
    cin>>i;

    vector<int> nums;
    int aux_pow=1;
    while(i>=nums.size()){
    	aux_pow*=5;
    	nums.push_back(aux_pow);
    	int x=nums.size();
    	for(int j=0;j<x-1;j++){
    		nums.push_back(aux_pow+nums[j]);
    	}
    }
    cout<<nums[i-1]<<endl;

    return 0;
}
