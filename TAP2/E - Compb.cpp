#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9 + 7;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll contaPares = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
                contaPares++;
            }
        }

        ll resultado = 1;
        for (ll i = 0; i < contaPares; i++) {
            resultado = (resultado * 2) % MOD;
        }

        if (contaPares == n) {
            resultado = (resultado - 1 + MOD) % MOD;
        }

        cout << resultado << endl;
    }
    return 0;
}
