#include <bits/stdc++.h>
#define TRUE 1
#define FALSE 0

using namespace std;



int is_graceful(string M[21],int k){
   int logic=TRUE;

    for(int i=0;i<k;i++){
        for(int i2=0;i2<k;i2++){
            if(M[i][i2]!=M[i][k-1-i2]) logic=FALSE;
 //           printf("| %c == %c |",M[i][i2],M[i][k-1-i2]);
        }//printf("\n");
    }

    return logic;
}

int is_beautiful(string M[21],int k){
   int logic=TRUE;

    for(int i=0;i<k;i++){
        for(int i2=0;i2<k;i2++){
            if(M[i][i2]!=M[k-1-i][i2]) logic=FALSE;
 //           printf("| %c == %c |",M[i][i2],M[k-1-i][i2]);
        }//printf("\n");
    }
    return logic;
}

int main(){
    int k;
    string M[21];

    cin>>k;
    getchar();
    for(int i=0;i<k;i++){
        getline(cin,M[i]);
    }

    int beautiful=is_beautiful(M,k); //horizontal
    int graceful=is_graceful(M,k); // vertical

    if(beautiful==TRUE && graceful == TRUE){
        cout<<"Magnificent\n";
    }
    if(beautiful==FALSE && graceful == FALSE){
        cout<<"Useless\n";
    }
    if(beautiful==TRUE && graceful == FALSE){
        cout<<"Beautiful\n";
    }
    if(beautiful==FALSE && graceful == TRUE){
        cout<<"Graceful\n";
    }

    return 0;
}