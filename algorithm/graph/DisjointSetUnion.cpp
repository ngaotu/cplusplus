#include <bits/stdc++.h>
using namespace std;

// tao n tap hop roi rac nhau
void make_set(int n, int *parent,int *size){
    for(int i =1;i<=n;i++){
        // luu phan tu dai dien cho tap hop 
        parent[i] = i;
        // luu kich thuoc cua tap hop
        size[i] = 1;
    }
}
// tim dai dien cua tap hop 
int find(int v,int *parent,int * size){
    if(v==parent[v]){
        return v;
    }
    // size[v] +=1;
    return parent[v]= find(parent[v],parent,size);
}
// 
void Union(int a,int b,int *parent,int * size){
    a = find(a,parent,size);
    b = find(b,parent,size);

    if(a==b){
        return;
    }
    else {
        if(size[a]<size[b]){
            swap(a,b);
        }
        parent[b]= a;
        size[a]+=size[b];
    }

}
int main (){
    int parent[1000];
    int size[1000];
    // so phan tu don le ban dau
    int n;
    return 0;
}