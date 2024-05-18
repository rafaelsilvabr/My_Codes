#include <bits/stdc++.h>

using namespace std;

vector<int> z_function(string s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

int main(){
    string s,t;

    cin>>s;
    cin>>t;

    vector<int> z= z_function(t+s);
    
    /*for (auto it = z.begin(); it != z.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;*/

    int counter=0;
    for (auto it = z.begin()+t.size(); it != z.end(); it++){
        if (*it>=t.size()){
            counter++;
        }
    }
    cout << counter <<endl;

    return 0;
}