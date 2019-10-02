#include <bits/stdc++.h>

using namespace std;

int power(long long x, long long y, long long p) 
{ 
    int res = 1;
  
    x = x % p;
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
        y = y >> 1;
        x = (x*x) % p; 
    } 
    return res; 
} 

int potenc(long long r,long long n,long long p)
{
	int aux=r;
	for(int i=1;i<=n;i++){
		aux*=r;
	}
	return aux%p;
}
int main(){
    long long p,n;

    cin>>p>>n;

    vector<int> div;
    int max=sqrt(p-1)+2;
    for(int c=1;c<=max;c++){
        if((p-1)%c==0){
            div.push_back(c);
            div.push_back(p/c);
        }
    }
    sort(div.begin(),div.end());
    div.erase(unique(div.begin(),div.end()),div.end());

    for(int i=0;i<n;i++){
    	long long r,pot;
    	bool flag=false;
    	cin>>r;
    	for(int j=1;div[j]<p-1;j++){
    	//	cout<<r<<p-1<<div[j]<<p<<endl;
    		if(power(r,div[j],p)==1){
    			flag=true;
    			break;
    		}
    	}
    	if(flag==true){
    		cout<<"NAO\n";
    	}else{
    		cout<<"SIM\n";
    	}
    }
    return 0;
}
