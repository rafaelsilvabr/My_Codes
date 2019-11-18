#include<bits/stdc++.h>
using namespace std;

typedef struct{
    pair <int,int> coord;
    int num;
}Solitaire;

typedef struct{
    pair <int,int> coord;
    bitset<101> solitaires;
}Location;

int main(){
    int n_places,range;
    cin>>n_places>>range;
    Location location[21]; 
    Solitaire people[101];

    ///Inputs
    int n_locations;
    cin>>n_locations;
    for(int i=0;i<n_locations;i++){
        cin>>location[i].coord.first>>location[i].coord.second;
    }   
    int n_people;
    cin>>n_people;
    for(int i=0;i<n_people;i++){
        cin>>people[i].coord.first>>people[i].coord.second;
        cin>>people[i].num;
    }

    ///Where the magics happens
    for(int i=0;i<n_locations;i++){
        for(int i2=0;i2<n_people;i2++){
            //check if people[i2] is on location[i]'s range
            int eucl_x,eucl_y;
            if(location[i].coord.first > people[i2].coord.first){
                eucl_x=location[i].coord.first - people[i2].coord.first;
            }else{
                eucl_x=people[i2].coord.first - location[i].coord.first;
            }

            if(location[i].coord.second > people[i2].coord.second){
                eucl_y=location[i].coord.second - people[i2].coord.second;
            }else{
                eucl_y=people[i2].coord.second - location[i].coord.second;
            }

            if(sqrt(pow(eucl_x,2)+pow(eucl_y,2))<=range){
                location[i].solitaires |= (1 << i2);
            }
        }
    }
    int n_max=0;
    //  for(int i=0;i<n_locations;i++){
    //      cout<<i<<" "<<location[i].solitaires<<endl;
    //  }

    for(int i=0;i<=pow(10,n_places);i++){
        bitset<101> aux=0;
        if(__builtin_popcount(i)==n_places){
            //cout<<i;
            for(int i2=0;i2<21;i2++){
                if((i&(1<<i2))){
                    aux=aux|location[i2].solitaires;
                }  
            }
//            cout<<"aux "<<aux<<endl;
            int n_aux=0;
            for(int c=0;c<101;c++){
                if(aux[c]==1){
                    n_aux+=people[c].num;
                }
            }
            if(n_aux>n_max){
                n_max=n_aux;
            }
        }
    }
    //Output
    cout<<n_max<<endl;
    return 0;
}