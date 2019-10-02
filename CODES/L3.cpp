#include<bits/stdc++.h>
using namespace std;

int main(){
	int number;
	cin>>number;
	int n1=number,n2=0,n3=0;
	int rodadas=0;
	do{
		cout<<"Rodada "<<rodadas<<": "<<n1;
		if(n1>1){
			cout<<" invictas, ";
		}else{
			cout<<" invicta, ";
		}
		cout<<n2<<" uma derrota, "<<n3;
		if(n3>1){
			cout<<" eliminadas.\n";
		}else{
			cout<<" eliminada.\n";
		}		
		if(n2==1 && n1==1){
			n2+=n1;
			n1=0;
		}else{
			n3+=n2/2;
			n2=(n2+1)/2;
			if(n1!=1){
				n2+=n1/2;
				n1=(n1+1)/2;
			}
		}
		rodadas++;
	}while(!(n2==1 && n1==0));
		cout<<"Rodada "<<rodadas<<": "<<n1;
		if(n1>1){
			cout<<" invictas, ";
		}else{
			cout<<" invicta, ";
		}
		cout<<n2<<" uma derrota, "<<n3;
		if(n3>1){
			cout<<" eliminadas.\n";
		}else{
			cout<<" eliminada.\n";
		}
		cout<<"Total: "<<rodadas<<" rodadas.\n";


	return 0;
}
