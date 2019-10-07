#include<bits/stdc++.h>
using namespace std;

int main(){
	string number;
	cin>>number;

	string number_aux=number;
	long long aux2;
	while(number.size()>1){
		long long i=number.size()-1;
		cout<<number<<endl;

		long long aux=number[i]-'0';
		aux2=number[i-1]-'0';	
		long long dif=aux2-aux;
		bool flag = true;
		if(number.size()==2){
			flag=false;
		}
//		cout<<" | "<<aux2<<" - "<<aux<<" = "<<dif<<endl;
		if(dif<0 && flag==true){
			long long pot=10,c=2;
			while(aux>aux2){
				if(i<0){
					flag=false;
					break;
				}
				aux2+=(number[i-c]-'0')*pot;
				c++;
				pot*=10;
			}
//			cout<<" 1 - aux: "<<aux<<" aux2: "<<aux2;
			aux2-=aux;	
//			cout<<"dif: "<<aux2<<endl;
			long long c2=1;
			while(c>1 && flag==true){
//				cout<<"Troca : "<<(int )number[i-c2]-'0'<<" por "<<(char) (aux2%10)+'0'<<endl;
				number[i-c2]=(aux2%10)+'0';
				aux2/=10;
				c2++;
				c--;
			}		
		}else{
			if(flag==false){
				break;
			}
			if(number.size()==2){
				flag=false;
				break;
			}
//			cout<<" 2 - aux: "<<aux<<" aux2: "<<dif<<endl;
//			cout<<"Troca : "<<number[i]<<" por "<<(char) (dif)+'0'<<endl;
			number[i-1]=dif+'0';
		}
		if(flag==true)
			number.pop_back();
//		cout<<aux<<" ";
		if(number[0]=='0'){
			int c=number.size();
			for(int ind=0;ind<c-1;ind++){
				number[ind]=number[ind+1];
			}	
			number.pop_back();
		}
	}
//	cout<<number.size()<<number[0]<<number[1]<<endl;
	if(number.size()==2 && number[0]==number[1]){
		cout<<"O numero "<<number_aux<<" eh divisivel por 11.\n";
	}else{
		cout<<"O numero "<<number_aux<<" nao eh divisivel por 11.\n";
	}
//	cout<<(int)number[0]-(int)number[1];

	return 0;
}
