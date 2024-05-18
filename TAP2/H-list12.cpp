#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    long long N;
    cin >> N;

    vector<long long> dp(N + 1, 0);
    dp[0] = 1;

    for (long long i = 1; i <= N; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] += dp[i - j];
                dp[i] %= MOD;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}
