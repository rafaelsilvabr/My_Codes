#include<bits/stdc++.h>
using namespace std;

int main(){
	string Number;
	cin>>Number;
	int N=Number.size();
	string n_final={};
	for(int i=0;i<N;i++){
		if(Number[i]!='1'){
			n_final.push_back(Number[i]);
		}
	}
	int c=0;
	while(c<n_final.size() && n_final[c]!='2'){
		c++;
	}
	n_final.insert(c,N-n_final.size(),'1');
	cout<<n_final<<endl;
	return 0;
}
