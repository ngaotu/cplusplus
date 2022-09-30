#include <bits/stdc++.h>
using namespace std;
 
 struct Product {
  string name;
  float quantity;
  float price;
  float sum ;
 };
 void GetProduct(Product & p){
     cout<<"Nhap ten: ";
     getline(cin,p.name);
     if(p.name!="*"){
     cout<<"Nhap so luong: ";
     cin>>p.quantity;
     cout<<"Nhap gia: ";
     cin>>p.price;
     cin.ignore();
     p.sum=p.quantity*p.price;
     }
 }
 void ShowProduct(Product p){
     cout<<"\nTen: "<<p.name<<"\nSo luong: "<<p.quantity<<"\nGia: "<<p.price<<"\nTong gia: "<<p.sum;
 }
 void GetList(Product * list,int& n){
     Product p;
     n=0;
     do{
     cout<<"Nhap ten: ";
     getline(cin,p.name);
     if(p.name!="*"){
     cout<<"Nhap so luong: ";
     cin>>p.quantity;
     cout<<"Nhap gia: ";
     cin>>p.price;
     cin.ignore();
     p.sum=p.quantity*p.price;
     list[n]=p;
     n++;
     }
      } while(p.name!="*");
 }
 void ShowList(Product * list, int n){
     for(int i =0;i<n;i++){
         ShowProduct(list[i]);
         cout<<"\n============";
     }
 }
 void ShowResutl(Product * list, int n ){
     float min = list[0].quantity;
     for(int i=1;i<n;i++){
         if(list[i].quantity<min){
             min=list[i].quantity;
         }
     }
     cout<<"\n**********************";
     for(int i = 0;i<n;i++){
         if(list[i].quantity==min){
             ShowProduct(list[i]);
             cout<<"\n=============";
         }
     }
 }
 void Insert(Product * list, int & n){
     Product x;
     GetProduct(x);
     int k;
     do{
     cout<<"Nhap vi tri can chen: ";
     cin>>k;
     } while(k<0||k>n);
     n++;
     if(k==0){
         for(int i=n-1;i>=1;i--){
             list[i]=list[i-1];
         }
         list[0]=x;
     }
     else if(k==n){
         list[n-1]=x;
     }
     else {
     for(int i=n-1;i>k;i--){
         list[i]=list[i-1];
     }
     list[k]=x;

     }
 }
 float Sum(Product * list,int n ){
     float sum=0;
     for(int i =0;i<n;i++ ){
         sum+=list[i].sum;
     }
     return sum;
 }
int main (){
 Product list[200];
 int n;
 GetList(list,n);
 ShowList(list,n);
 ShowResutl(list,n);
 Insert(list,n);
 ShowList(list,n);
 cout<<"\nTong gia tri cua tat ca hang hoa: "<<Sum(list,n);
    return 0;
}