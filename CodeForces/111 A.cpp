#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	int coins[110];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>coins[i];
	}
	sort(coins,coins+N);
	int sum=0;
	for(int i=0;i<N;i++){
		sum+=coins[i];
	}	
	sum/=2;
	int ans=0,s_ans=0;
	for(int i=N-1;i>=0 && s_ans<=sum;i--){
		s_ans+=coins[i];
		ans++;		
	}
	cout<<ans<<endl;
	return 0;
}
