#include <bits/stdc++.h>
using namespace std;

int ml;

int binarySearch(vector<int>& arr, int l, int r, int x)
{
	//cout<<"DEBUG BS";
	ml=-1;
	while (l <= r) {
		int m = l + (r - l) / 2;
		if(arr[m] == x){
			ml=m;
			return m;
		}
		if (arr[m] >= x){
			ml = m;
			r = m - 1;
		}
		if (arr[m] < x){
			l = m + 1;
		}

	}
	return -1;
}

// Driver code
int main(void)
{
	
	int n,m,i;
	int temp,sum=0;
	vector<int> arr;


	cin>>n;
	for (i=0; i<n; i++){ //10^5
		cin>>temp;
		sum+=temp;
		arr.push_back(sum);
	}

	/*for (auto it = arr.begin(); it != arr.end(); it++){
        if(*it>0) cout<<*it<<" ";
    }*/

	cin>>m;
	for(i=0;i<m;i++){ //10^5 
		cin>>temp;
		int result=binarySearch(arr, 0, n-1, temp); //log(n)
		cout<<ml+1<<endl;
	}
	

	return 0;
}
