#include<bits/stdc++.h>
using namespace std;

#define MAX 100010

long long A[MAX],F[MAX];

int busca_binaria(int min,int max,int num){
	int meio;
	if(num<A[0]) return -1;
	if(num>=A[max]) return max;
	while(min<=max){
		meio=(min+max)/2;
		if(A[meio]>num){
			max=meio-1;
		}
		if(A[meio]<=num){
			min=meio+1;
		}
	}
	return max;
}

int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<N-1;i++){
		cin>>A[i];
	}
	for(int i=0;i<N;i++){
		cin>>F[i];
	}
	long long O;
	for(int i=0;i<M;i++){
		cin>>O;
		int min=0,max=N-2;
		int id = busca_binaria(min,max,O);
		cout<<F[id+1]<<" ";
	}cout<<endl;
	return 0;
}
