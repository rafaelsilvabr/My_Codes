#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

ll modFatorial(int n) {
    ll fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial = (fatorial * i) % MOD;
    }
    return fatorial;
}

// inverso modular usando o teorema de Euler
ll modInverse(ll a, ll m) {
    ll m0 = m, t, q;
    ll x0 = 0, x1 = 1;

    if (m == 1)
      return 0;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0)
       x1 += m0;

    return x1;
}

int main() {
    string s;
    cin >> s;
    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }

    ll result = modFatorial(s.size());
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 1) {
            result = (result * modInverse(modFatorial(freq[i]), MOD)) % MOD;
        }
    }

    cout << result << endl;
    return 0;
}


