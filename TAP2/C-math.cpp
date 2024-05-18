#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long empadaos = 1;

    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) { 
            empadaos *= 2;
        } else { 
            empadaos = empadaos * 2 + 1;
        }
    }

    cout << empadaos << endl;
    return 0;
}
