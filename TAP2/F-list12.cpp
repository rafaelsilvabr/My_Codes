#include <bits/stdc++.h>
using namespace std;

int maxCompositeSummands(int n) {
    if (n < 4) return -1;
    if (n % 4 == 0) return n / 4;
    if (n % 4 == 1) {
        if (n >= 9) return (n - 9) / 4 + 1;
        else return -1;
    }
    if (n % 4 == 2) {
        if (n >= 6) return (n - 6) / 4 + 1;
        else return -1;
    }
    if (n % 4 == 3) {
        if (n >= 15) return (n - 15) / 4 + 2;
        else return -1;
    }
    return -1;
}

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<maxCompositeSummands(n)<<endl;
    }
    return 0;
}
