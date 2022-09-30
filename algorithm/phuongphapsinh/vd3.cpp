#include <bits/stdc++.h>
using namespace std;
// khoi tao hoan vi dau tien {1,2,..,n}
void ktao(int a[],int n){
for(int i=1;i<=n;i++){
    a[i]=i;
}
}
void phuongphapsinh(int a[],int n,bool ok){
    int i=n-1;
    int k=n;
    while(i>0&&a[i]>a[i+1]){
        i--;
    }
    if(a[k]<a[i]){
        k--;
    }
    
}
int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
bool ok;
int a[100];

}