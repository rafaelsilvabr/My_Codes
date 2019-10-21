#include<bits/stdc++.h>
using namespace std;

string c_hello="hello";

int main(){
	string str;
	cin>>str;
	int c=0;
	for(int i=0;i<str.size();i++){
		if(str[i]==c_hello[c]){
			c++;
		}
		if(c>c_hello.size()){
			break;
		}
	}
	if(c>=c_hello.size()){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

	return 0;
}
