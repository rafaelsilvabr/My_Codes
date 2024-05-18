#include <bits/stdc++.h>

using namespace std;

int main(){
    //vector<string> words={"and", "not", "that", "the","you"};
    string s;
    cin>>s;

    for(int i;i<s.size();i++){
        cout<<(char)(s[i]-32);
    }cout<<endl;
    return 0;
}