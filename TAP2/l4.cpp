#include <bits/stdc++.h>
#include <iostream>

#define ll long long
#define MOD 1000000007

using namespace std;

int gcd(int a, int b){
    return b==0 ? a: gcd(b, a%b);
}

int main(){
    int N, num;
    cin>>N;

    while(N--){
        cin>>num;
        //int ans=is_prime(num);
        cout<<is_prime(num)<<endl;
    }

	return 0;
}
