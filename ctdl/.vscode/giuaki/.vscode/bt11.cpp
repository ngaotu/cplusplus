#include <bits/stdc++.h>
using namespace std;
//  kiem tra so nguyen to
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
// kiem tra so hoan hao
bool Perfect_Number(int so){
    int sum=0;
    for(int i=1;i<=so/2;i++){
if(so%i==0){
    sum+=i;
}
    }
    if(so!=sum){
        return false;
    }
    return true;
}
// kiem tra so chinh phuong
bool Square_Number(int so){
    int temp=sqrt(so);
    if(temp*temp!=so){
        return false;
    }
    return true;
}
 void GetInput(int a[],int n){
     for(int i=0 ;i<n;i++){
         cout<<"a["<<i<<"]= ";
         cin>>a[i];
     }
 }
 void GetOutput(int a[],int n){
     for(int i=0 ;i<n;i++){
         
         cout<<a[i]<<" ";
     }
 }
 
int main (){
int n;
cout<<"Nhap mang: ";
cin>>n;
int a[100];
GetInput(a,n);
cout<<"Phan tu cua mang la: ";
GetOutput(a,n);

cout<<"\nCac so nguyen to co trong mang la: ";
for(int i=0;i<n;i++){
if(Prime(a[i])==true){
    cout<<a[i]<<" ";
}
}
cout<<"\nCac so hoan hao co trong mang la: ";
for(int i=0;i<n;i++){
if(Perfect_Number(a[i])==true){
    cout<<a[i]<<" ";
}
}
cout<<"\nCac so chinh phuong co trong mang la: ";
for(int i=0;i<n;i++){
if(Square_Number(a[i])==true){
    cout<<a[i]<<" ";
}
}




    return 0;
}