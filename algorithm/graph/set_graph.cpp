#include <bits/stdc++.h>
using namespace std;
#define MAX 100
//  chuyen danh sach canh sang ma tran ke
bool visited[MAX] = {false};
bool choose = false;
void ReadData(ifstream & f,int & m,int & n, int a[MAX][MAX]){
    f.open("ex2.txt", ios::in);
    f>>m>>n;
    for(int i =1;i<=n;i++){
        int x,y;
        f>>x>>y;
        a[x][y]  = 1;
        if(!choose){
            a[y][x]=1;
        }
        if(i<=m){
            a[i][i]= 0; 
        }
    }
    f.close();
}
void ShowAdjMatrix(int m ,int n, int a[MAX][MAX]){
    for(int i =1;i<=m;i++){
        for (int j = 1;j<=m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void DFS(int a[MAX][MAX],int u,int m){
    cout<<u<<" ";
    visited[u] = true;
    for(int i =1;i<=m;i++){
        if(!visited[i] && a[u][i]){
            DFS(a,i,m);
        }
    }
}
void BFS(int a[MAX][MAX],int u,int m ){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        for(int i =1;i<=m;i++){
            if(!visited[i] && a[v][i] ){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main (){
    ifstream f;
    int m;
    int n;
    int a[100][100];
    cout<<"Do thi co huong hay k?: ";
    cin>>choose;
    ReadData(f,m,n,a);
    cout<<"Convert to matrix: \n";
    ShowAdjMatrix(m,n,a);
    DFS(a,1,m);
    // return 0;
}