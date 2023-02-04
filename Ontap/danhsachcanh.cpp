#include <bits/stdc++.h>
using namespace std;
#define MAX 100
//  chuyen ma tran ke sang danh sach canh
void init(fstream & file,int &n,vector<pair<int,int>> &ds){
    file.open("D:\\Workspace\\C++\\Ontap\\matran.txt");
    // n la so dinh 
    file>>n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            int x;
            file>>x;
            if(x && i<j){
                ds.push_back({i,j});
            }
        }
    }
    file.close();
}

//  chuyen ma tran ke sang danh sach ke
void init(fstream & file,int &n,vector <int> dsk[MAX]){
    file.open("D:\\Workspace\\C++\\Ontap\\matran.txt");
    // n la so dinh 
    file>>n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=n;j++){
            int x;
            file>>x;
            if(x){
                dsk[i].push_back(j);
            }
        }
    }
    file.close();
}
void show(vector<int> dsk[MAX],int n){
    for(int i =1;i<=n;i++){
        cout<<i<<": ";
        for(int j : dsk[i]){
            cout<<j<<", ";
        }
        cout<<endl;
    }
}
void show(vector<pair<int,int>> ds){
    for(auto i : ds){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
int main (){
    int n;
    vector<pair<int,int>> ds;
    vector <int> dsk[MAX];
    fstream file;
    init(file,n,dsk);
    show(dsk,n);
    return 0;
}