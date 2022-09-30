#include <bits/stdc++.h>
using namespace std;
void kq(int a[],int n){
for(int i=1;i<=n;i++){
    cout<<a[i];
}
cout<<endl;
}
// thuat toán quay lui
void Try(int a[],int i,int n){
for(int j=0;j<=1;j++){
a[i]=j;

// kiem tra xem da den bit thu n chua neu roi in ra cau hinh do
if(i==n){
kq(a,n);
}
else {
    Try(a,i+1,n);
}
}
}
int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
int a[100];
Try(a,1,n);
    return 0;
}