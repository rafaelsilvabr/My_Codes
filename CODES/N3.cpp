#include<bits/stdc++.h>
using namespace std;

int main(){
	int number;
	vector<vector<int>> coord(510,vector<int>(2));
	vector<int> distance(510,99999999);
	vector<bool> seen(510,false);
	vector<int> time(510,99999999);
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
	for(int i=0;i<number;i++){
		cin>>time[i];
	}
	int ind_aux;
	int smaller_open_vertice=999999999;
	while(smaller_open_vertice!=999999999){
		int smaller_open_vertice=999999999;
		for(int i=0;i<number;i++){
			if(seen[i]==false){
				if(distance[i]<smaller_open_vertice){
					smaller_open_vertice=distance[i];
					ind_aux=i;
				}
			}
		}
		for(int i=0;i<number;i++){
			if(i!=ind_aux){
				seen[ind_aux]=true;				
				int aux_distance = distance[ind_aux]+((abs(coord[i][0]-coord[ind_aux][0])+abs(coord[i][1]-coord[ind_aux][1]))*M[ind_aux][i]); 
				if(distance[i]>aux_distance){
					distance[i]=aux_distance;
					if(distance[i]<=time[i]){
						cout<<"SIM\n";
						smaller_open_vertice=999999999;
						break;
					}
				}
			}
		}
	}
	cout<<"NAO\n";
	return  0;
}
