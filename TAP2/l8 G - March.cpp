#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n;
    cin >> n;
    vector<ll> count(5, 0); 

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        switch (s[0]) {
            case 'M': count[0]++; break;
            case 'A': count[1]++; break;
            case 'R': count[2]++; break;
            case 'C': count[3]++; break;
            case 'H': count[4]++; break;
        }
    }

    ll ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 5; k++) {
                ans += count[i] * count[j] * count[k];
            }
        }
    }

    cout << ans << endl;
    return 0;
}

/*
int main()
{
    ll n;
    ll way[5] = {0};
    cin >> n;
    char s[100006][11];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i][0] == 'M') way[0]++;
        if (s[i][0] == 'A') way[1]++;
        if (s[i][0] == 'R') way[2]++;
        if (s[i][0] == 'C') way[3]++;
        if (s[i][0] == 'H') way[4]++;
    }
    ll ans = way[0] * way[1] * way[2] + way[0] * way[1] * way[3] + 
    way[0] * way[2] * way[3] + way[1] * way[2] * way[3] +
    way[0] * way[1] * way[4] + way[0] * way[2] * way[4] + 
    way[0] * way[3] * way[4] + way[1] * way[2] * way[4] + 
    way[1] * way[3] * way[4] + way[2] * way[3] * way[4];
    cout << ans << endl;
return 0;
}
*/