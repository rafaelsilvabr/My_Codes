    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int num;
        cin>>num;
        for(int i=0;i<num;i++){
            int aux;
            cin>>aux;
            set<int> nums;
            nums.insert(0);
            for(int i2=1;i2<=(sqrt(aux));i2++){
                nums.insert(aux/i2);
                nums.insert(i2);
            }
     
            cout<<nums.size()<<endl;
            for(auto i:nums){
                cout<<i<<" ";
            }cout<<endl;
            
        }
        return 0;
    }