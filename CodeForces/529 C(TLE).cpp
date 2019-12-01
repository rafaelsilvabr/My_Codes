#include<bits/stdc++.h>
using namespace std;

long long pot2[30] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912};

int arr[100002];
int nerest_power(int left,int right,int num){
    int mid;
	if(right > left) {  
		int mid = right - (right - left) / 2;
		if(pot2[mid] == num) return mid;
		if(pot2[mid] > num) return nerest_power(left, mid-1, num); 
		return nerest_power(mid, right, num);
	} 
	return left;
}

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;int k;
        cin>>n>>k;
        if(n<k){
            cout<<"NO\n";
            return 0;
        }

        vector<long long> powers;
        while(n>0){
            long long aux;
            aux = nerest_power(0,29,n);
            if(aux != -1 ) powers.push_back(aux);
            n-=pot2[aux];
        }

        for(int i=powers.size()-1;i>=0;i--){    
            if(powers[i]-1>=0){
                powers[i]--;
                powers.push_back(powers[i]);
            }else{
                break;
            }
            if(powers.size()>=k) break;
        }

        if(powers.size()==k){
            cout<<"YES\n";
            sort(powers.begin(),powers.end());
            for(int i=0;i<powers.size();i++){
                cout<<pot2[powers[i]]<<" ";
            }cout<<endl;
        }else{
            cout<<"NO\n";
        }


    return 0;
}