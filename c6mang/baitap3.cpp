#include <bits/stdc++.h>
using namespace std;
 void GetInput(int a[100],int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
 }
 void GetOutput(int a[100],int n){
     cout<<"Mang da nhap la: \n";
    for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
    }
 }
 bool Prime(int so){
     if(so<=1){
         return false;
     }
     for(int i=2;i<=sqrt(so);i++){
         if(so%i==0){
             return false;
         }
     }
     return true;
 }
 bool SquareNumber(int so){
     int a= sqrt(so);
     if(a*a!=so){
         return false;
     }
     return true;
 }

void Print_Prime(int a[100],int n){
    cout<<"\nCac so nguyen to co trong mang la: \n";
    for(int i=0;i<n;i++){
        if(Prime(a[i])==true){
            cout<<a[i]<<" ";
        }
    }
}
void Print_SquareNumber(int a[100],int n){
    cout<<"\nCac so chinh phuong co trong mang la: \n";
    for(int i=0;i<n;i++){
        if(SquareNumber(a[i])==true){
            cout<<a[i]<<" ";
        }
    }
}
//  chen x vao vi tri thu k trong day so
void Insert( int a[100],int & n,int & x,int & k){
    n++;
cout<<"\nNhap phan tu can chen: ";
cin>>x;
cout<<"\nNhap vi tri can chen(bat dau tu vi tri thu 0): ";
cin>>k;
// chen vao dau mang
if(k<0){
    for(int i=n-1;i>=1;i--){
        a[i]=a[i-1];
    }
    a[0]=x;
}
// chen vao cuoi mang
else if (k>=n){
a[n-1]=x;
}
else {
for(int i=n-1;i>k;i--){
a[i]=a[i-1];
}
a[k]=x;
}
 
}


int main (){
    int a[100];
    int n,x,k ;
    cout<<"Nhap so phan tu cua mang: \n";
    cin>>n;
   GetInput(a,n);
   GetOutput(a,n);
//   Print_Prime(a,n);
//   Print_SquareNumber(a,n);
  Insert(a,n,x,k);
  GetOutput(a,n);
return 0;
}