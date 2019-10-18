#include<bits/stdc++.h>
using namespace std;

/*
5 4
5
1 2
2 2
3 2
4 2
5 2*/



#define MAX 10000
int mem [MAX][MAX];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int R,C;

	cin>>R>>C;

	mem[0][0]=1;

	int X_aux,Y_aux,C_num;
	cin>>C_num;

	for(int i=0;i<C_num;i++){
		cin>>X_aux>>Y_aux;
		mem[X_aux-1][Y_aux-1]=-1;
	}
/*
	///PRINTA MATRIZ
	for(int i=0;i<R;i++){
		for(int i2=0;i2<C;i2++){
			cout<<mem[i][i2];
		}cout<<endl;
	}cout<<endl;*/

	for(int i=1;i<C;i++){
		if(mem[0][i]!=-1){
			if(mem[0][i-1]!=-1)
				mem[0][i]=mem[0][i-1];
			else
				mem[0][i]=0;
		}
	}
	for(int i=1;i<R;i++){
		if(mem[i][0]!=-1){
			if(mem[i-1][0]!=-1)
				mem[i][0]=mem[i-1][0];
			else
				mem[i][0]=0;
		}
	}

	for(int i=1;i<R;i++){
		for(int i2=1;i2<C;i2++){
			if(mem[i][i2]!=-1 && mem[i-1][i2]!=-1){
				mem[i][i2]=mem[i-1][i2];
			}
			if(mem[i][i2]!=-1 && mem[i][i2-1]!=-1){
				if(mem[i][i2]>0)
					mem[i][i2]+=mem[i][i2-1];
				else
					mem[i][i2]=mem[i][i2-1];
			}
		}
	}
	cout<<mem[R-1][C-1]<<endl;
	return 0;
}
