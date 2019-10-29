#include<bits/stdc++.h>
using namespace std;

long long NC2(long long n, long long r){
    return (n*(n-1))/2;
}

int main(){
	long long m,n;
	cin>>n>>m;
	long long s=0;
	if(n%m!=0){
		s=NC2((n/m)+1,2)*(n%m);
	}
	long long s2=NC2(n/m,2)*(m-n%m);
	long long b=NC2(n-(m-1),2);
	
	cout<<s+s2<<" "<<b<<endl; 
	return 0;
}
