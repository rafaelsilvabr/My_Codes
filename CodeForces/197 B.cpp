#include<bits/stdc++.h>
using namespace std;

#define int long long

int calcdist(int from,int to,int mod){
	if(to<from){
		to+=mod;
	}
	return to-from;
}

int32_t main(){
	int n,m;
	int atual=1;
	int aux;
	int sum=0;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>aux;
		sum+=(calcdist(atual,aux,n));
		atual=aux;
	}
	cout<<sum<<endl;
	return 0;
}
