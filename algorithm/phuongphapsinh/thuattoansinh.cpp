// phuong phap sinh 
//  khoi tao cau hinh dau tien
//  while (khi chua phai cau hinh cuoi cung)
    // in ra cau hinh hien tai
    // sinh ra cau hinh ke tiep
#include <bits/stdc++.h>
using namespace std;
// khoi tao cau hinh dau tien
void create(int * a,int n){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void next_seq(int *a,int n,bool & ok){
    int i =n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        i--;
    }
    a[i]=1;
    //  kiem tra xem co phai cau hinh cuoi cung khong 11111111
    if(i==0){
        ok = true;
    }
}
void print_seq(int *a,int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    bool ok = false;
    create(a,n);
    while(!ok){
        print_seq(a,n);
        next_seq(a,n,ok);
    }
    return 0;
}