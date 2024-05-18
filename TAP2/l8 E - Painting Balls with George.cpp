#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    long long totalWays = K;
    for (int i = 1; i < N; ++i) {
        totalWays *= (K - 1);
    }

    cout << totalWays << endl;
    return 0;
}
