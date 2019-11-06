#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	int v[110];
	int ans[110];
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>v[i];
	}
	for(int i=0;i<num;i++){
		ans[v[i]-1]=i+1;
	}
	for(int i=0;i<num;i++){
		cout<<ans[i]<<" ";
	}cout<<endl;

	return 0;
}
