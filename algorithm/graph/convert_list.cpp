#include <bits/stdc++.h>
using namespace std;
// bai toan kiem tra chu trinh tren do thi
// duyet cay : theo muc do mau sac
//  0 - White : chua duoc tham
//  1- Gray : dang duoc tham
//  2-Black: da tham xong
bool visited[100] = {false};
int color[100] = {0}; 
int st,en;
int parList[101];
bool choose = false;
int parent[101];
int size[101];
struct edge {
    // start - u , end -v
        int u,v;
        int w;
    edge(int x,int y,int z){
        u = x;
        v =y;
        w =z;
    };
     bool operator<(const edge & other){
        return w <other.w;
    }
};
void make_set(int m){
    for(int i =1;i<=m;i++){
        parent[i]= i;
        size[i] = 1;
    }
}
int find(int v){
    if (v==parent[v]){
        return v;
    }
    return find(parent[v]);
}

bool Union(int a, int b){
    a = find(a);
    b= find (b);
    if(a==b){
        return false;
    }
        //  quy uoc kich thuoc cua tap hop a lon hon kich thuoc cua tap hop b
    if(size[a]<size[b]){
            swap(a,b);
    }
        // hop  tap hop nho hon cho tap hop co kich thuoc lon hon
    parent[b]= a;
    size[a]+= size[b];
    return true;
}
//  nhap vao danh sach ke
void Input(ifstream&f, int &m, int &n,vector <edge> & vt){
    f.open("ex6.txt",ios::in);
    f>>m>>n;
    for(int i =1;i<=n;i++){
        int x,y,w;
        f>>x>>y>>w;
        edge e = edge(x,y,w);
        vt.push_back(e);
    }
    f.close();
}
//  chuyen sang danh sach ke
void ConvertToList(ifstream&f, int &m, int &n,vector <pair<int,int>> * vt){
    f.open("ex6.txt",ios::in);
    f>>m>>n;
    for(int i =1;i<=n;i++){
        int x,y,w;
        f>>x>>y>>w;
        vt[x].push_back({y,w});
        if(!choose){
            vt[y].push_back({x,w});
        }
    }
    f.close();
}

void ShowList(vector <edge>  vt){
   for(int i = 0;i<vt.size();i++){
       cout<<vt[i].u<<": {"<<vt[i].v<<"-"<<vt[i].w<<"}"<<endl;
    }
}
void ShowList(vector <pair<int,int>>  *vt,int m){
   for(int i = 1;i<=m;i++){
    cout<<i<<":{";
       for(int j = 0;j<vt[i].size();j++){
        cout<<vt[i][j].first<<"-"<<vt[i][j].second<<" , ";
       }
       cout<<"}"<<endl;
    }
}

void Kruskal(vector <edge> vt,int m ,int n ){
    vector <edge> mst;
    int d = 0;
    // sort danh sach canh
    sort(vt.begin(),vt.end());
    // lap lai
    for(int i =0;i<n;i++){
        if(mst.size() ==m-1){
            break;
        }
        edge e = vt[i];
        //  neu 2 dinh cua 1 canh khong co cung cha:
        if(Union(e.u,e.v)){
            mst.push_back(e);
            d+=e.w;
        }
    }
    cout<<mst.size()<<endl;
    for(auto x:mst){
        cout<<"("<<x.u<<","<<x.v<<") => ";
    }
    cout<<"\nDo dai cay khung cuc tieu la: "<<d<<endl;
}
// void BFS(vector <pair<int,int>> *vt, int u){
//     queue<int> q;
//     q.push(u);
//     visited[u] = true;
//     while(!q.empty()){
//         int v = q.front();
//         q.pop();
//         for(pair<int,int> x: vt[v]){
//             if(!visited[x.first]){
//                 q.push(x.first);
//                 visited[x.first]= true;
//                 parList[x.first] = v;
//             }
//             // x khong la con truc tiep cua v
//             else if(x.first!=parList[v]){
                
//             }
//         }
//     }  
// }
void DFS(vector<pair<int,int>> *vt,int u){
    cout<<u<<" ";
    color[u] = 1;
    for(pair<int,int> v:vt[u]){
        if(color[v.first]==0){
            DFS(vt,v.first);
        }
    }
    color[u] =2;
}
// kiem tra xem co canh nguoc hay khong

bool DFS(vector<pair<int,int>> *vt,int u,int par){
    parList[u] = par;
    //  dang tham dinh u
    color[u] = 1;
    for(pair<int,int> v:vt[u]){
        if(color[v.first]==0){
            parList[v.first]= u;
            if(DFS(vt,v.first,u)){
                return true;
            }
        }
        else {
            // co canh nguoc (u,v) neu dinh v ke dinh u khong phai cha dinh u
            if(color[v.first]==1 && v.first!=par){
                st = v.first;
                en = u;
                return true;
            }
        }
    }
    color[u] = 2;
    return false;
}
// bool DFS(vector<int> *vt,int u,int par){
//     parList[u] = par;
//     visited[u] = true;
//     for(int v:vt[u]){
//         if(!visited[v]){
//             if(DFS(vt,v,u)){
//                 parList[v]= u;
//                 return true;
//             }
//         }
//         else {
//             // co canh nguoc (u,v) neu dinh v ke dinh u khong phai cha dinh u
//             if(v!=par){
//                 st = v;
//                 en = u;
//                 return true;
//             }
//         }
//     }
//     return false;
// }
bool BFS(vector <pair<int,int>> *vt, int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();
        cout<<v<<" ";
        q.pop();
        for(pair<int,int> x: vt[v]){
            if(!visited[x.first]){
                q.push(x.first);
                visited[x.first]= true;
                parList[x.first] = v;
            }
            // x khong la con truc tiep cua v
            // else if(x.first!=parList[v]){
            //     return true;
            // }
        }
    }
    return false;  
}
void ConnectedComponent(vector <pair<int,int>> *vt,int m){
    memset(color,0,sizeof(color));
    for(int i =1;i<=m;i++){
        if(color[i]==0){
            if(DFS(vt,i,0)){
                cout<<"Do thi lien thong\nChu trinh cua do thi la:";
                vector<int> cycle;
                cycle.push_back(st);
                while(en!=st){
                    cycle.push_back(en);
                    en = parList[en];
                }
                cycle.push_back(en);
                reverse(cycle.begin(),cycle.end());
                for(int x:cycle){
                    cout<<x<<" ";
                }
                return;
            }
        }
    }
    cout<<"Do thi khong lien thong";
}
//  do thi ton tai chu trinh khi no co canh nguoc vd: 1-2-4-1 
int main (){
    ifstream f;
    vector <edge> vt;
    vector <pair<int,int>> ds_canh[101];
    int m,n;
    do{
    cout<<"Do thi co huong khong? (0,1): ";
    cin>>choose;
    } while(choose!=0 && choose !=1);
    Input(f,m,n,vt);
    make_set(m);
    ConvertToList(f,m,n,ds_canh);
    ShowList(ds_canh,m);
    Kruskal(vt,m,n);
    DFS(ds_canh,1);
    // ConnectedComponent(ds_canh,m);
    return 0;
}