/*
chuong trinh tim so tap con co k phan tu ( tu tap  tu 1 den n )
kh: x la 1 tap con co k phan tu {x1,x2,x3,...,xk}(  theo thu tu tang dan)
nhu vay : xk<=n ;X(k-1)<n-k+(k-1);....
x1<=(n-k+1) ( gioi han tren )
Xi>X(i-1)+1 ( gioi han duoi)
*/
#include <bits/stdc++.h>
using namespace std;
void ktao(int a[],int n,int &k){
    cout<<"\nNhap k: ";
    cin>>k;
for(int i=1;i<=k;i++){
    a[i]=i;
}
}
void phuongphapsinh(int a[],int n,int k,bool &ok){
int i=k;
 while( (i>0)&& (a[i]==(n-k+i))){
     i--;
    }
    if(i>0){
        a[i]++;
        for (int j=i+1;j<=k;j++){
a[j]=a[j-1]+1;
        }
    }
    else {
        ok=true;
    }

}
int main (){
int n;
int a[100];
int k;
bool ok=false;
cout<<"Nhap n: ";
cin>>n;
cout<<" tap hop ={ ";
for(int j=1;j<=n;j++){
    cout<<j;
    if(j!=n){
        cout<<" , ";
    }
}
cout<<" }";
ktao(a,n,k);

while(ok==false){
for(int i=1;i<=k;i++){
    cout<<a[i]<<" ";
   }
cout<<endl;
 phuongphapsinh(a,n,k,ok);
}

    return 0;
}