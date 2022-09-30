#include <bits/stdc++.h>
using namespace std;
// khoi tao cau hinh dau tien : 
void create(int *a,int k){
    for(int i=1;i<=k;i++){
        a[i]=i;
    } 
}
void next_seq(int *a,int n,int k,bool & ok){
    int i =k;
    while(a[i]==n-k+i&&i>=1){
        i--;
    }
    a[i]+=1;
    for(int j =i+1;j<=k;j++){
        a[j]=a[j-1]+1;
    }
    // dat cau hinh cuoi cung
    if(i==0){
        ok = true;
    }
}
void print_seq(int *a ,int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main (){
    int n,k;
    cin>>n>>k;
    int a[n];
    create(a,n);
    bool ok = false;
    while(!ok){
        print_seq(a,k);
        next_seq(a,n,k,ok);
    }
    return 0;
}