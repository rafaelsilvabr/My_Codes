#include<bits/stdc++.h>
using namespace std;

#define MAX 100010

long long Casas[MAX];
long long soma;	

int busca_binaria(int min,int max,int num){
	int meio;
	if(num<Casas[0]) return -1;
	if(num>=Casas[max]) return max;
	while(min<=max){
		meio=(min+max)/2;
		if(Casas[meio]+num==soma) return meio;
		if(Casas[meio]+num>soma){
			max=meio-1;
		}
		if(Casas[meio]+num<soma){
			min=meio+1;
		}
	}
	return -1;
}

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>Casas[i];
	}
	cin>>soma;
	int min=0,max=N-1;
	for(int i=0;i<N-1;i++){
		min=i+1;
		int id = busca_binaria(min,max,Casas[i]);
		if(id>-1){
			cout<<Casas[i]<<" "<<Casas[id]<<endl;
		}
	}
	return 0;
}
