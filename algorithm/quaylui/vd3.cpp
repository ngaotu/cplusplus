#include <bits/stdc++.h>
using namespace std;
void kq(int a[],int k){
  
for(int i=1;i<=k;i++){
    cout<<a[i];
}
cout<<endl;

}

// thuat toán quay lui tim chinh hop chap k cua n phan tu
void hoanvi(int a[],int n,int k,int i,int ok[] ){
    for(int j=1;j<=n;j++){
        if(ok[j]==0){
            ok[j]=1;// danh dau kha nang j da duoc su dung
            a[i]=j;
        
if(i==k){
    kq(a,k);
}
else {
    hoanvi(a,n,k,i+1,ok);
    
}
//backtrack(quay lui)
ok[j]=0;
        }

    }
}


int main (){
int n;
 cout<<"Nhap n: ";
cin>>n;
int a[100];
// tao mang danh dau(0 la chua xuat hien con 1 la da xuat hien )
int ok[100]={0};
int k;
cout<<"Nhap k: ";
cin>>k;
cout<<"Cac chinh hop chap k la:\n";
hoanvi(a,n,k,1,ok);

    return 0;
}