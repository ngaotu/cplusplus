#include <bits/stdc++.h>
using namespace std;

 struct Medicine{
     string name;
     int year;
     int quantity;
     float price;
   
 };

void GetInput(Medicine &m){
    cout<<"Input name: ";
    getline(cin,m.name);
    cout<<"Input expiry: ";
    cin>>m.year;
    cout<<"Input quantity: ";
    cin>>m.quantity;
    cout<<"Input price: ";
    cin>>m.price;
}
void GetOutput(Medicine m){
    cout<<"\nName: "<<m.name<<"\nExpiry: "<<m.year<<"\nQuantity: "<<m.quantity<<"\nPrice: "<<m.price;
    cout<<"\n\t============";
}
void ListMedicine(Medicine * li, int &n){
    n=0;
    Medicine tmp ;
    do{
       GetInput(tmp);
       if(tmp.name!=""){
           li[n]=tmp;
           n++;
       }
       cin.ignore();
    } while(tmp.name!="");
}
void ShowListMedicine(Medicine *li,int n){
    for(int i=0;i<n;i++){
        GetOutput(li[i]);
    }
}
void ShortList(Medicine * li,int n){
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n;j++){
            if(li[i].year>li[i].year){
                Medicine tmp = li[i];
                li[i]=li[j];
                li[j]=tmp;
            }
        }
    }
}
void GetYear(int & expiry){
      time_t now = time(NULL);
    tm * utc = localtime(&now);
     expiry = utc->tm_year+1900; 
}
// danh sach thuoc da het han 
void ShowListNoDate(Medicine *li,int n, Medicine * no_date, int &m){
    m=0;
    int expiry;
    GetYear(expiry);
    cout<<"\nExpired medication list: ";
    for(int i = 0;i<n;i++){
        if(li[i].year<expiry){
            no_date[m]=li[i];
            m++;
        }
    }
    
}
void ShortListNoDate(Medicine *li, int n){

}
void Delete(Medicine * li, int & n, int year){
   
   int index;
   for(int i =0;i<n;i++){
       if(li[i].year==year){
           index = i;
       }
   }
   for(int i = index;i<n-1;i++){
      li[i]=li[i+1];
   }
   n--;
}
void DeleteList(  Medicine *li , int & n){
    int expiry;
   GetYear(expiry);
   for(int i=0;i<n;i++){
       if(li[i].year<expiry){
           Delete(li,n, li[i].year);
           i--;
       }
}
}
void TotalExpired(Medicine * nodate,int m){
    float sum =0;
    for(int i=0;i<m;i++){
        sum+= nodate[i].price*nodate[i].quantity;
    }
    cout<<"\nThe price of all expired medication list : "<<sum;
}
int main (){
  int n;
  int m;
  Medicine * li  = new Medicine;
  Medicine nodate[100];

  ListMedicine(li,n);
//    dua ra danh sach thuoc 
  cout<<"List of medicine: ";
  ShowListMedicine(li,n);
//   dau ra danh sach thuoc xep theo han su dung
  cout<<"\n List after sorting: ";
  ShortList(li,n);
  ShowListMedicine(li,n);

// dua ra danh sach thuoc het han
 ShowListNoDate(li,n,nodate,m);
 ShowListMedicine(nodate,m);

 
// xoa danh sach thuoc het han va dua ra danh sach thuoc moi
 cout<<"\nUnexpired medication list: ";
 DeleteList(li,n);
 ShowListMedicine(li,n);
// tinh tong thuoc da het han
TotalExpired(nodate,m);
 delete[] li;
    return 0;
}