#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> army(1010,0);
	for(int i=0;i<=m;i++){
		cin>>army[i];
	}
	int f=0;
	for(int i=0;i<m;i++){
		int aux=0;
		for(int i2=0;i2<=20;i2++){
			if((army[i]&(1<<i2)) && !(army[m]&(1<<i2)) || (army[m]&(1<<i2)) && !(army[i]&(1<<i2)))
				aux++;
		}
		if(aux<=k){
			f++;
		}
	}
	cout<<f<<endl;
	return 0;
}
