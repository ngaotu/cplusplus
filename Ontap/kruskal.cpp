#include <bits/stdc++.h>
using namespace std;

//  so luong dinh, so luong canh cua do thi
int n,m;
int parent[100];
int size[100];
struct edge{
 int u,v;
 int w;
//  w la trong so, u : dinh dau, v dinh cuoi
edge(int a,int b,int c){
    u = a;
    v= b;
    w= c;
}
};

bool cmp(edge a,edge b){
   return a.w<=b.w;
}
void make_set(){
    for(int i =1;i<=n;i++){
        parent[i]=i;
        size[i] = 1;
    }
}
int find(int u ){
    if(u==parent[u]){
        return u;
    }
    else{
        return parent[u]=find(parent[u]);
    }
}
bool Union(int a, int b){
    a= find(a);
    b=find(b);
    if(a!=b){
        if(size[a]<size[b]){
            swap(a,b);
        }
        parent[b]=a;
        size[a]+=size[b];
        return true;
    }
    return false;
}
void kruskal(vector<edge> & e){
    vector <edge> mst;
    int d= 0; 
    //  trong so cua cay khung
    sort(e.begin(),e.end(),cmp);

    for(auto i : e){
        cout<<i.u<<" "<<i.v<<", ";
    }
   for(int i =0;i<m;i++){
        if(mst.size()==n-1){
            break;
        }
        edge min = e[i];
        if(Union(min.u,min.v)){
            mst.push_back(min);
            d+=min.w;
        }
   }
   for(auto i : mst){
        cout<<i.u<<" "<<i.v<<", ";
   }
   cout<<"\nCay khung nho nhat co trong so la: "<<d;

}
int main (){
    vector <edge> e;
    cout<<"Nhap so luong dinh, canh: ";
    cin>>n>>m;
    for(int i =0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edge tmp = edge(u,v,w);
        e.push_back(tmp);
    }
    make_set();
    kruskal(e);
    return 0;
}