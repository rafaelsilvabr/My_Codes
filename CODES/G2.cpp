#include <bits/stdc++.h>

using namespace std;

bool decre(int n1,int n2){
    return n1>n2;
}

int main(){

    int n1,n2;
    int counter=0;

    cin>>n1;
    if(n1==6174) counter++;
    while(n1!=6174){
        int num[4];

        num[0]=n1/1000;
        num[1]=n1/100-num[0]*10;
        num[2]=n1/10-num[1]*10-num[0]*100;
        num[3]=n1-num[2]*10-num[1]*100-num[0]*1000;

//        cout<<"nums:"<<num[0]<<num[1]<<num[2]<<num[3]<<endl;

        sort(num,num+4,decre);
        n1=num[0]*1000+num[1]*100+num[2]*10+num[3];
        sort(num,num+4);
        n2=num[0]*1000+num[1]*100+num[2]*10+num[3];

 //       cout<<n1<<n2<<endl;
        n1-=n2;
 //       cout<<n1<<endl;
        counter ++;
    }

    cout<<counter<<endl;


    return 0;
}