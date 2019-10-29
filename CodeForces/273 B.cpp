#include<bits/stdc++.h>
using namespace std;

long long NC2(long long n, long long r){
    return (n*(n-1))/2;
}

int main(){
	long long m,n;
	cin>>n>>m;
	long long s=NC2((n+(m-1))/m,2);
	if(n%m==0) s*=m;
		else s*=(n%m);
	long long b=NC2(n-(m-1),2);
	cout<<s<<" "<<b<<endl; 
	return 0;
}
