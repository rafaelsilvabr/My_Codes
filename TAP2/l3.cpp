#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

//int primes[100]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int modularPower(long long x, long long y) 
{ 
	int res = 1;
	x = x % MOD;
	if (x == 0) return 0; 
	while (y > 0) 
	{ 
		if (y & 1) 
			res = (res*x) % MOD; 
		y = y>>1; 
		x = (x*x) % MOD; 
	} 
	return res; 
} 

int modpow( int x, int n, int m ){
    if (n == 0) return 1;
    if (x == 0) return 0;

    long long u = modpow(x, n/2, m );
    u = (u * u) % m;

    if (n % 2) u = (u * x) % m;
    return u;
}

int main(){
    int n;
    long long a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==1){
            cout<<-1<<endl;
        }else{
            cout<<1<<" "<<(a/2)<<endl;
        }
    }
    return 0;
}