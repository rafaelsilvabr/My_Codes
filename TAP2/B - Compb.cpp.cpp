#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    int N;
    string S;
    cin >> N >> S;

    vector<int> freq(26, 0);
    for (char c : S) {
        freq[c - 'a']++;
    }

    ll result = 1;
    for (int i = 0; i < 26; i++) {
        result = (result * (freq[i] + 1)) % MOD;
    }

    result = (result - 1 + MOD) % MOD; // Subtrair 1 e garantir que o resultado seja positivo
    cout << result << endl;

    return 0;
}
