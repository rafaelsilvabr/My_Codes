#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MOD = 1e9 + 7;
const int TWO_MOD_INV = 500000004;

long long total_sum(long long start, long long end) {
	return ((((end - start + 1) % MOD) * ((start + end) % MOD) % MOD) *
	        TWO_MOD_INV % MOD);
}

int main() {
	long long n;
	std::cin >> n; //5

	long long total = 0;
	long long at = 1;
	while (at <= n) {
		long long add_amt = n / at;  // Our divisor to process // 5/2 =2
		// The largest number that still has the same value of q 
		long long last_same = n / add_amt; // 5/2=2

		total = (total + add_amt * total_sum(at, last_same)) % MOD; // 5+2*SUM(2,2)
		at = last_same + 1;
	}

	cout << total << endl;
}