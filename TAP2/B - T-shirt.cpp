#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    double probabilidade;

    if (X <= A) {
        probabilidade = 1.0;
    } else if (X > A && X <= B) {
        probabilidade = (double)(C) / (double)(B - A);
    } else {
        probabilidade = 0.0;
    }
    cout << fixed << setprecision(12) << probabilidade << endl;
    return 0;
}
