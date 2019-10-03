#include <bits/stdc++.h>

using namespace std;

int main(){
    int loop=1;
    double number;
    char a;
    for(int i=0;i<loop;i++){
        cin>>number;
        while(1){
            scanf("%c",&a);
            if(a=='@'){
                number*=3;
            }
            if(a=='%'){
                number+=5;
            }
            if(a=='#'){
                number-=7;
            }
            if(a=='\n'){
                break;
            }
        }
        cout<<fixed<<setprecision(2)<<number<<endl;
    }

    return 0;
}