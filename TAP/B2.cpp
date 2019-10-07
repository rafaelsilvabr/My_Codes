#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000000
int main(){
	int number;
	vector<vector<int>> coord(510,vector<int>(2));
	vector<long long> distance(510,MAX);
	vector<bool> seen(510,false);
	vector<int> time(510,-1);
	int M[510][510];
	distance[0]=0;

	cin>>number;
	for(int i=0;i<=number;i++){
		cin>>coord[i][0]>>coord[i][1];
	}
	for(int i=0;i<=number;i++){
		for(int i2=0;i2<=number;i2++){
			cin>>M[i][i2];
		}
	}
	for(int i=1;i<=number;i++){
		cin>>time[i];
	}
	int ind_aux,unique=0;
	int smaller_open_vertice=0;
	bool flag=true;
	while(flag==true){
		long long smaller_open_vertice=MAX;
		flag=false;
		for(int i=0;i<=number;i++){
			if(seen[i]==false){
				flag=true;
				if(distance[i]<smaller_open_vertice){
					smaller_open_vertice=distance[i];
					ind_aux=i;
				}
			}
		}
		for(int i=0;i<=number;i++){
			if(i!=ind_aux){
				seen[ind_aux]=true;				
				long long aux_distance = distance[ind_aux]+((abs(coord[i][0]-coord[ind_aux][0])+abs(coord[i][1]-coord[ind_aux][1]))*M[ind_aux][i]); 
				if(distance[i]>aux_distance){
					distance[i]=aux_distance;
				}
				if(distance[i]<=time[i]){
					cout<<"SIM\n";
					unique=1;
					flag=false;
					break;
				}
			}
		}
/*		for(int c=0;c<=number;c++){
			printf("Vertice : (%d,%d) | Distance: %d | Time: %d | Seen ",coord[c][0],coord[c][1],distance[c],time[c]);
			cout<<seen[c]<<endl;
		}printf("\n");
*/	}
	if(unique==0){
		cout<<"NAO\n";
	}
	return  0;
}
