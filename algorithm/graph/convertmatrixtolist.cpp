#include <bits/stdc++.h>
using namespace std;
bool visited[101] = {false};
void ConvertMatrixToList(ifstream & f, vector <int> * vt,int & m){
    f.open("cvMatrix.txt",ios::in);
    f>>m;
    for(int i = 1;i<=m;i++){
        for(int j =1;j<=m;j++){
            int x;
            f>>x;
            if(x!=0){
                vt[i].push_back(j);
            }
        }
    }
    f.close();
}

void ShowList(vector <int> * vt,int m){
    for(int i = 1;i<=m;i++){
        cout<<i<<": {";
        for(int x:vt[i]){
            cout<<x<<" ";
        }
        cout<<"}"<<endl;
    }
}
void DepthFirstSearch(vector <int> *vt,int u){
    cout<<u<<" ";
    // danh dau dinh da duoc tham 
    visited[u] = true;
    for(int v:vt[u]){
        // neu dinh v chua duoc tham thi tham dinh v
        if(!visited[v]){
            DepthFirstSearch(vt,v);
        }
    }
}
// su dung queue
void BreadthFirstSearch(vector <int> *vt,int u){
    memset(visited,false,sizeof(visited));
    // khoi tao queue
    queue <int> q;
    q.push(u);
    visited[u]= true;
    while(!q.empty()){
        // tham 
        int v = q.front();
        cout<<v<<" ";
        q.pop();
        // duyet cac dinh ke voi dinh v
        for(int x:vt[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int ConnectedComponent(vector<int> *v,int m){
    memset(visited,false,sizeof(visited));
    int cnt =0;
    for(int i =1;i<=m;i++){
        if(!visited[i]){
            cnt++;
            cout<<"\nCac dinh thuoc thanh phan lien thong thu "<<cnt<<" la: ";
            DepthFirstSearch(v,i);
        }
    }
    return cnt;
}

int main (){
    vector <int> vt[101];
    int m;
    ifstream f;
    ConvertMatrixToList(f,vt,m);
    ShowList(vt,m);
    DepthFirstSearch(vt,1);
    BreadthFirstSearch(vt,1);
    // cout<<"\nSo thanh phan lien thong la: "<<ConnectedComponent(vt,m);
    return 0;
}