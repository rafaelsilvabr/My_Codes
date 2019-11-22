#include<bits/stdc++.h>
using namespace std;

#define isPowerOfTwo(S) (!(S & (S - 1)))
#define MAX 120010

int main(){
    
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin>>n;
    int nums[MAX];
    set<int> num;
    int pot=2;
    int count=0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
        num.insert(nums[i]);
    }

    for(int i=0;i<n;i++){
        int flag=0;
        for(int i2=0;i2<40;i2++){
            if(num.find(pot-nums[i])!=num.end()){
                flag=1;
            }
        }
        if(flag==0) count++;
        pot*=2;
    }



    cout<<count<<endl;

    return 0;
}