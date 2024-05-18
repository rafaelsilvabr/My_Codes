#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll MOD = (1e9 + 7);

int main()
{
    ll N, M;
    ll c = 1;

    cin >> M >> N;

    if (abs(M - N) >= 2)
        cout << "0";
    else
    {
        for (int i = 1; i <= N; i++)
            c = c * i % MOD;
        for (int i = 1; i <= M; i++)
            c = c * i % MOD;
        if (M == N)
            c = c * 2 % MOD;
        cout << c;
        return 0;
    }
}