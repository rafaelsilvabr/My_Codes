#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int N;
    cin >> N;
    unordered_map<int, ll> freq;
    ll total_pairs = 0;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        freq[num]++;
    }

    for (unordered_map<int, ll>::iterator it = freq.begin(); it != freq.end(); ++it) {
        total_pairs += (N - it->second) * it->second;
    }

    cout << total_pairs/2 << endl;

    return 0;
}
