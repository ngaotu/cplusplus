#include <bits/stdc++.h>
using namespace std;
 
 void GetInput(float * a,int n){
     for(int i=0;i<n;i++){
       cout<<"a["<<i<<"]: ";
       cin>>a[i];
     }
 }
 void GetOutput(float * a,int n){
     for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
     }
 }
 void PosNum(float * a,int n){
     cout<<"\n";
     for(int i=0;i<n;i++){
         if(a[i]>0){
             cout<<a[i]<<" ";
         }
     }
 }
 void MinMax(float * a,int n){
   float min  = a[0], max=a[0];
   for(int i =1;i<n;i++){
       if(a[i]<min){
           min=a[i];
       }
       if(a[i]>max){
           max=a[i];
       }
   }
   cout<<"\nMin: "<<min<<"\nMax: "<<max;
 }

int main (){
 int n;
 cout<<"Nhap n: ";
 cin>>n;
 float * a = new float [n];
 GetInput(a,n);
 GetOutput(a,n);
 PosNum(a,n);
 MinMax(a,n);
 delete[] a;
    return 0;
}