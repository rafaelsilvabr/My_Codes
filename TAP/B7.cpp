#include<bits/stdc++.h>
using namespace std;

vector <vector<int>> triangle_path(45,vector<int>(45,-9999999));
vector <vector<int>> mem(45,vector<int>(45,-9999999));


int main (){
	int K;
	cin>>K;
	int C=1;
	for(int i=1;i<=K;i++){
		for(int i2=1;i2<=C;i2++){
			cin>>triangle_path[i][i2];
		}
		C++;
	}
	mem[1][1]=triangle_path[1][1];
/*	for(int i=0;i<=K;i++){
		for(int i2=0;i2<=K;i2++){
			cout<<triangle_path[i][i2]<<" ";
		}cout<<endl;
	}*/
	C=2;
	for(int i=2;i<=K;i++){
		for(int i2=1;i2<=C;i2++){
			///changes
			int aux=max(mem[i-1][i2-1],mem[i-1][i2]);
			mem[i][i2]=max(mem[i][i2],aux+triangle_path[i][i2]);
		}
		C++;
	}
/*	C=1;
	for(int i=1;i<=K;i++){
		for(int i2=1;i2<=C;i2++){
			cout<<mem[i][i2]<<" ";
		}cout<<endl;
		C++;
	}*/
	int ans=mem[K][1];
	for(int i=2;i<=K;i++){
		ans=max(ans,mem[K][i]);
	}
	cout<<ans<<endl;
	return 0;
}
