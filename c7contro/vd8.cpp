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
 void BubbleSort(float * a,int n){
     for(int i=0;i<n-1;i++){
         for(int j=0;j<n-i-1;j++){
             if(a[j]>a[j+1]){
                 swap(a[j],a[j+1]);
             }
         }
     }
 }
 void CheckNum( float * a, int & n){
     float x;
     cout<<"Nhap so can kiem tra: ";
     cin>>x;
    if(x>a[n-1]){
        n++;
        a[n-1]=x;
    }
    else {

     int index =-1;
     for(int i=0;i<n;i++){
         if(a[i]==x){
             index=i;
             break;
         }
     }
     if(index==-1){
         n++;
         int tmp=-1;
         for(int i=0;i<n;i++){
             if(a[i]<x){
                 tmp=i;
             }
             else  {
                 tmp++;
                 break;
             }
         }
         for(int i = n-1;i>tmp;i--){
             a[i]=a[i-1];
         }
         a[tmp]=x;
     }
    }
 }
 void DeleteNum(float * a,int & n){
   float x;
   do{
   cout<<"Nhap x: ";
   cin>>x;

   } while(x<0||x>=n);
   
   n--;
   for(int i= x;i<n;i++){
       a[i]=a[i+1];
   }
 }
int main (){
 int n;
 cout<<"Nhap n: ";
 cin>>n;
 float * a = new float [n];
 GetInput(a,n);
 BubbleSort(a,n);
 CheckNum(a,n);
 GetOutput(a,n);
 DeleteNum(a,n);
 GetOutput(a,n);
 delete[] a;
    return 0;
}