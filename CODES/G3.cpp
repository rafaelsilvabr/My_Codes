#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    int x,y,z;

    cin>>a>>b>>c>>x>>y>>z;

    int n=1;
    while(!(n%a==x && n%b==y && n%c==z)){
        n++;
    }
    cout<<n<<endl;

    return 0;
}
