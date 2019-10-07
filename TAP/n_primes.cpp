#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) 
{ 

    if (n <= 1)  return false; 
    if (n <= 3)  return true; 

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
            return false; 
  
    return true; 
} 
vector<long long> s;
void findPrimefactors(int n) 
{ 
    int i=0,i2=2,i3;
    while(i<=n){
        i3=i2;
        if(isPrime(i3)==true){
            s.push_back(i3);
            cout<<","<<i3;
        }
        i=s.size();
        i2++;
    }
} 

int main(){
	int num;
    cin>>num;
    findPrimefactors(num);
	return 0;
}
