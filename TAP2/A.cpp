#include <bits/stdc++.h>

using namespace std;
//static const size_t npos = -1;

int main(){
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> vertA(n);
    vector<int> vertB(n);
    vector<int> visited(n);
    vector<int> queue;
    vector<int>::iterator it;
    
    for(int i=0; i<n-1; i++){
        cin>>vertA[i]>>vertB[i];
    }
//    cout<<"DEBUG: FIM ENTRADA"<<endl;


    //execução
    int start=x;
    int vizinho,temp;
    queue.push_back(start);
    while(!queue.empty()){
        temp = queue.front();
        if(temp==y){
            break;
        }

        for(int i=0; i<n; i++){
            //Se filho
            if(vertB[i]==temp && visited[vertA[i]-1]==0){
                visited[vertA[i]-1]=temp;
                queue.push_back(vertA[i]);  
            }
            //Se Pai
            if(vertA[i]==temp && visited[vertB[i]-1]==0){
                visited[vertB[i]-1]=temp;
                queue.push_back(vertB[i]);
            }
        }
        it=queue.begin();
        queue.erase(it);
        //cout<<temp;
    }
    

    /*cout<<"Queue: ";
    for (auto it = queue.begin(); it != queue.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;

    cout<<"Visited: ";
    for (auto it = visited.begin(); it != visited.end(); it++){
        cout << *it << " ";
    }
    cout<<endl;*/

    temp=y;
    int flag=0;
    vector<int> queue1;
    queue1.push_back(y);
    while(flag==0){
        queue1.push_back(visited[temp-1]);
        temp=visited[temp-1];
        if(temp==x){
            flag=1;
        }
    }

    for (auto it = queue1.end()-1; it != queue1.begin()-1; it--){
        cout << *it << " ";
    }

    return 0;
}