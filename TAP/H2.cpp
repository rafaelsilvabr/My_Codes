#include<bits/stdc++.h>
using namespace std;
int main(){
	char M[1010][1010];
	int n1,n2;
	cin>>n1>>n2;
	int navios=0;
	for(int i=1;i<=n1;i++){
		for(int i2=1;i2<=n2;i2++){
			cin>>M[i][i2];
			if(M[i][i2]=='*'){
				if((M[i-1][i2]!='*' && M[i][i2-1]!='*')){
					navios++;
				}
			}
		}getchar();
	}
//	cout<<navios<<endl;

	int tiros;
	cin>>tiros;
	int aux_x,aux_y;
	for(int i=0;i<tiros;i++){

	for(int i=1;i<=n1;i++){
		for(int i2=1;i2<=n2;i2++){
			cout<<M[i][i2];
		}cout<<endl;
	}

		cin>>aux_x>>aux_y;
		aux_y+=1;
		aux_x+=1;
		if(M[aux_x][aux_y]=='*'){
			int counter_v=0;
			M[aux_x][aux_y]='o';
			if(M[aux_x-1][aux_y]=='*'){
				counter_v++;
			}
			if(M[aux_x+1][aux_y]=='*'){
				counter_v++;
			}

			int counter_h=0;
			if(M[aux_x][aux_y-1]=='*'){
				counter_h++;
			}
			if(M[aux_x][aux_y+1]=='*'){
				counter_h++;
			}
			bool flag =true;
			if(counter_h>counter_v){
				for(int i=0;i<n2;i++){
					if(M[aux_x][aux_y+i]=='*'){
						flag=false;
						break;
					}
					if(!(M[aux_x][aux_y+i]=='*')){
						break;
					}
				}
				for(int i=0;i<n2;i++){
					if(M[aux_x][aux_y-i]=='*'){
						flag=false;
						break;
					}
					if(!(M[aux_x][aux_y+i]=='*')){
						break;
					}
				}
			}else{
				for(int i=0;i<n1;i++){
					if(M[aux_x+i][aux_y]=='*'){
						flag=false;
						break;
					}
					if(!(M[aux_x][aux_y+i]=='*')){
						break;
					}
				}
				for(int i=0;i<n1;i++){
					if(M[aux_x-i][aux_y]=='*'){
						flag=false;
						break;
					}
					if(!(M[aux_x][aux_y+i]=='*')){
						break;
					}
				}
			}
			if(flag==true){
				navios--;
			}
		}
		cout<<navios<<endl;
	}


	return 0;
}
