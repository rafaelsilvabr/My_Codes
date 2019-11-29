#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    string b;

    cin>>a>>b;
    vector<int> n_a (30,0);
    vector<int> n_b (30,0);
    for(int i=0;i<a.size();i++){
        n_a[a[i]-'a']++;
    }
    for(int i=0;i<b.size();i++){
        n_b[b[i]-'a']++;
    }

    // for(int i=0;i<30;i++){
    //     cout<<n_a[i]<<" ";
    // }cout<<endl;
    // for(int i=0;i<30;i++){
    //     cout<<n_b[i]<<" ";
    // }cout<<endl;

    int i;
    for(i=25;i>=0;i--){
        if(n_a[i]>n_b[i]){
            printf("First string is older\n");
            break;
        }
        if(n_a[i]<n_b[i]){
            printf("First string is younger\n");
            break;
        }
    }
    if(i<0){
        printf("The two strings are the same age\n");
    }
    return 0;
}