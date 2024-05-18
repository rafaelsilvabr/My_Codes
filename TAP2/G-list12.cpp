#include <bits/stdc++.h>
using namespace std;

string canMakeX(int x) {
    for (int i = 0; i * 111 <= x; ++i) {
        if ((x - i * 111) % 11 == 0) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << canMakeX(x) << endl;
    }
    return 0;
}
