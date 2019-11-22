#include<bits/stdc++.h>
using namespace std;

#define isPowerOfTwo(S) (!(S & (S - 1)))
#define MAX 120010

void printSet(int vS) {                         // in binary representation
  printf("S = %2d = ", vS);
  stack<int> st;
  while (vS)
    st.push(vS % 2), vS /= 2;
  while (!st.empty())                         // to reverse the print order
    printf("%d", st.top()), st.pop();
  printf("\n");
}

int main(){
    
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    long long repeat=0;
    int n;
    cin>>n;

    long long nums[MAX];
    set<long long> num;
    map<long long,long long> mp;
    long long pot=2;
    int count=0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
        mp[nums[i]]++;
    }

 //   printSet(repeat);

    for(int i=0;i<n;i++){
        int flag=0;
        pot=2;
        for(int i2=0;i2<36;i2++){
            if(mp.find(pot-nums[i])!=mp.end() && ( (pot-nums[i])!=nums[i] || mp[nums[i]]>1 )){
                flag=1;
            }
            pot*=2;
        }
        if(flag==0) count++;
    }



    cout<<count<<endl;

    return 0;
}