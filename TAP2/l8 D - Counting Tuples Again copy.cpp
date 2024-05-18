#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int main() {
    int N;
    cin >> N;
    long long count = 1;

    for (int i = 0; i < N; ++i) {
        long long C;
        cin >> C;

        count = (count * (C - i)) % MOD;

        if (count <= 0) {
            count = 0;
            break;
        }
    }

    cout << count << endl;
    return 0;
}
