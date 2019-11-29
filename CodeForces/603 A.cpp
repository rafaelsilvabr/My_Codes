#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    for(int i=0;i<n;i++){
        long long nums[3];
        cin>>nums[0]>>nums[1]>>nums[2];
        sort(nums,nums+3);

        long long a=nums[2],b=nums[1];

        if(nums[0]+b <= a) {
            b+=nums[0];
            nums[0]=0;
            }
        else {
            nums[0]-=(a-b);
            b=a;
        }
        b+=nums[0]/2;

        cout<<b<<endl;
    }

    

    return 0;
}