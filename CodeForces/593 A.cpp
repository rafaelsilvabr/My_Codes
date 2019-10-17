#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	int a,b,c;
	cin>>t;
	int sum=0;
	for(int i=0;i<t;i++){
		sum=0;
		cin>>a>>b>>c;
		while(b>=1&&c>=2){
			sum+=3;
			b-=1;
			c-=2;
		}
		while(a>=1&&b>=2){
			sum+=3;
			a-=1;
			b-=2;
		}	
		cout<<sum<<endl;
	}
	return 0;
}
