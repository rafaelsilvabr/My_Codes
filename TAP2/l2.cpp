#include <bits/stdc++.h>

using namespace std;

vector<int> zTable(string pat){
     int n = pat.length();
     vector<int>z;
     z.resize(n);
     int len = 0;
     z[0]=0;

     int i=1;
    
     while(i < n){
         if(pat[i] == pat[len]){
              len++;
              z[i]=len;
              i++;
         }else{
               if(len != 0){
                  len = z[len-1];
               }else{
                   z[i]=0;
                   i++;
               }
         }
     }

     return z;

}

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
    string s;

    cin>>s;

    vector<int>z = zTable(s);
    vector<int>r;

    int temp = z[z.size()-1];
    while(temp>0){
        r.push_back(temp);
        temp=z[temp-1];
    }

    sort(r.begin(), r.end());

    for (auto it = r.begin(); it != r.end(); it++){
        if(*it>0) cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}