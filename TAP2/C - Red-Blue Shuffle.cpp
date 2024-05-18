#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string red, blue;
        cin >> red >> blue;

        int redWins = 0, blueWins = 0;
        for (int i = 0; i < n; i++) {
            if (red[i] > blue[i]) {
                redWins++;
            } else if (red[i] < blue[i]) {
                blueWins++;
            }
        }

        if (redWins > blueWins) {
            cout << "RED" << endl;
        } else if (blueWins > redWins) {
            cout << "BLUE" << endl;
        } else {
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}
