#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b){
    int r;
    a=abs(a);
    b=abs(b);
    while(b!=0){
r=a%b;
a=b;
b=r;
    }
    return a;
}
void GetInput(int a[],int n){
    for( int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
int UCLN_Array(int a[],int n){
    int ucln=a[0];
    for( int i=1;i<n;i++){
      ucln=UCLN(ucln,a[i]);
    }
    return ucln;
}
int main (){
int a[100];
int n;
cout<<"Nhap n: ";
cin>>n;
GetInput(a,n);
cout<<"Uoc chung lon nhat cua cac phan tu trong mang la: "<<UCLN_Array(a,n);
return 0;
}