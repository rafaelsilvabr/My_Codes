#include <bits/stdc++.h>
using namespace std;

long long binomialCoefficient(int n, int k) {
    long long result = 1;
    if (k > n - k) k = n - k;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int L;
    cin >> L;

    cout << binomialCoefficient(L - 1, 11) << endl;
    return 0;
}

