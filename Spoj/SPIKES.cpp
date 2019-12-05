#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r,s;
    char matrix[45][45];
    queue <pair<int,int>> q;
    cin>>r>>c>>s;
    getchar();
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            scanf("%c",&matrix[i][j]);
            pair <int,int> aux; aux.first=i; aux.second=j;
            if(matrix[i][j]=='@') q.push(aux); 
        }getchar();
    }

    






    return 0;
}