#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1000000007;

ll dp[(int)1e6 + 6];
ll dfs(ll n)
{
	if (n < 1e6 + 6)
		return dp[n];
	return max(n, dfs(n / 2) + dfs(n / 3) + dfs(n / 4));
}

int main()
{
	for (ll i = 0; i < 1e6 + 6; i++)
		dp[i] = max(i, dp[i / 2] + dp[i / 3] + dp[i / 4]);
	ll n;
	while (cin >> n)
	{
		cout << dfs(n) << '\n';
	}
	return 0;
}