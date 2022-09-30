#include <bits/stdc++.h>
using namespace std;
// khoi tao cau hinh dau tien
void create(int *a,int n,int num){
    a[1]=num;
}
// in ra cau hinh hien tai
void print(int *a,int n){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// sinh ra cau hinh ke tiep
// tim gia tri a[i] dau tien khac 1 (sau do giam di 1)
void next_seq(int *a,int &n,bool & ok ,int num){
    int i =n;
    while(a[i]==1&&i>=1){
        i--;
    }
        a[i]--; 
        int rest = n-i+1;
        n = i;
        int q = rest/a[i];
        int r = rest %a[i];
        if(q){
            for(int j =1;j<=q;j++){
                n++;
                a[n]=a[i];
            }
        }
        if(r!=0){
            n++;
            a[n]=r;
        }
    
    if(i==0){
        ok = true;
    }
}
int main (){
    int num;
    cin>>num;
    int n =1;
    int cnt =0;
    bool ok =false;
    int a[num];
    create(a,n,num);
   while(!ok){
    print(a,n);
    next_seq(a,n,ok,num);
    cnt++;
    
   }
   cout<<"So cach: "<<cnt;
    return 0;
}