#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int visited[100] = {0};
int parent[100]={0};
int size[100] ={1};
//  chuyen danh sach canh sang ma tran ke
void init(fstream & file,int &n,int &m,int a[MAX][MAX]){
    file.open("D:\\Workspace\\C++\\Ontap\\dauvao.txt");
    // n la so canh m la so dinh
    file>>n>>m;
    for(int i =0;i<m;i++){
        int x,y;
        file>>x>>y;
        a[x][y] = 1;
        // a[y][x]=1;
    }
    file.close();
}

void show(int a[MAX][MAX],int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
// chuyen danh sach canh sang danh sach ke
void init(fstream & file,int &n,int &m,vector<int> ds[MAX] ){
    file.open("D:\\Workspace\\C++\\Ontap\\dauvao.txt");
    // n la so dinh m la so canh bai tap ap dung do thi khong huong
    file>>n>>m;
    for(int i =0;i<m;i++){
        int x;int y;
        file>>x>>y;
        ds[x].push_back(y);
        // ds[y].push_back(x);
    }
    file.close();
}
void show(vector<int> ds[MAX],int n){
    for(int i =1;i<=n;i++){
        cout<<i<<": ";
        for(int j : ds[i]){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}
// duyet theo chieu sau Depth first search
void DFS(int u,vector<int> ds[MAX]){
    // tham dinh u
    cout<<u<<" ";
    // danh dau la da tham u
    visited[u] = 1;
    // duyet tat ca dinh ke voi u
    for(int i : ds[u]){
        if(!visited[i]){
           DFS(i,ds);
        }
    }
}
void DFS2(int u,int a[MAX][MAX],int n){
    cout<<u<<" ";
    visited[u] = 1;
    for(int i =1;i<=n;i++){
        if(a[u][i] &&!visited[i]){
            DFS2(i,a,n);
        }
    }
}
//  duyet theo chieu rong
void BFS(int u ,vector<int> ds[MAX]){
    queue<int> q;
    memset(visited,0,sizeof(visited));
    q.push(u);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        cout<<v<<" ";
        visited[v]=1;
        // duyet cac dinh ke voi dinh v, neu chua duoc tham thi dua vao queue
        for(int i : ds[v]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
bool DFS(int u,int par,vector <int> ds[MAX]){
    visited[u] = 1;
    for(int i : ds[u]){
        if(!visited[i]){
            if (DFS(i,u,ds)) return true;
        }
        else if(i!=par){
            return true;
        }
    }
    return false;
}

// dem so thanh phan lien thong
int connectedComponent(int n,vector<int> ds[MAX]){
    // khoi tao so thanh phan lien thong la 0
    memset(visited,0,sizeof(visited));
    int cnt =0;
    for(int i =1;i<=n;i++){
        if(!visited[i]){
            cnt+=1;
            DFS(i,ds);
        }
    }
    return cnt;
}
// cau truc du lieu disjoint set (dung de tim cay khung nho nhat cua do thi )

// khoi tao cha cua moi tap hop la chinh no va kich thuoc moi tap hop la 1
void make_set(int n){
    for(int i =1;i<=n;i++){
        parent[i]=i;
        size[i] = 1;
    }
}
int find(int u){
    //  neu no la dai dien cua chinh no
    if(u== parent[u]){
        return u;
    }
    //  neu khong thi de quy den cha cua no 
    else {
        return parent[u]=find(parent[u]);
    }
}
void Union(int a,int b){
    // tim dai dien cua hai tap a va b
    a = find(a);
    b = find(b);
    if(a!=b){
        //  mac dinh tap b la tap co kich thuoc nho hon
        if(size[b]>size[a]){
            swap(a,b);
        }
        //  gan cha cua tap hop nho hon =  cha cua tap hop lon hon ( cap nhat lai kich thuoc cua tap lon)
        parent[b]= a;
        size[a] +=size[b];
    }
}

int main (){
    int n,m;
    vector<int> ds[MAX];
    int a[MAX][MAX];
    fstream file;
    init(file,n,m,ds);
    init(file,n,m,a);
    show(ds,n);
    cout<<"Duyet danh sach ke theo chieu rong: ";
    BFS(1,ds);
    memset(visited,0,sizeof(visited));
    cout<<"\nDuyet ma tran ke theo chieu sau: ";
    DFS2(1,a,n);
    cout<<"\nSo thanh phan lien thong cua do thi la: "<<connectedComponent(n,ds);
    cout<<"\nDo thi co chu trinh hay khong: "<<DFS(1,0,ds);
    return 0;
}