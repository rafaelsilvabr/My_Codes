#include<bits/stdc++.h>
using namespace std;

int main(){
	int num_camisa;
	cin>>num_camisa;
	int sum=0;
	int somat=0,aux_somat;
	for(int i=1;i<=num_camisa-3;i++){
		aux_somat=somat;
		somat+=i;
//		cout<<"Soma Anterior: "<<aux_somat<<" Soma: "<<somat<<endl;
		sum+=somat;
	}
	cout<<sum<<endl;
	return 0;
}
