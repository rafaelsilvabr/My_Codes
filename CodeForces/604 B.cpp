#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int size;
        cin>>size;
        vector<int> nums;
        vector<int> bin;
        for(int c=0;c<size;c++){
            int aux;
            cin>>aux;
            nums.push_back(aux);
            bin.push_back(0);
        }

        for(int c=0;c<size;c++){
            int j=0,j2=0;
            for(int c2=0;c2<size;c2++){
                if(nums[j2]>nums[c]){
                    j=j2+1; j2=j2+1;
                }else{
                    if((j2-j)+1 == nums[c]){
                        bin[nums[c]-1]=1;
                        break;
                    }
                    j2++;
                }
            }
        }

        for(int i2=0;i2<size;i2++){
            cout<<bin[i2];
        }cout<<endl;
    }
    return 0;
}