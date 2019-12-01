#include<bits/stdc++.h>
using namespace std;

int arr[11]= {0,1,3,6,10,15,21,28,36,45,55};

int main(){
    int n;
        cin>>n;
        string str;
        cin>>str;

        for(int j=0;arr[j]<str.size();j++){
            cout<<str[arr[j]];
        }cout<<endl;
    

    return 0;
}