#include <iostream>
#define Max 20
using namespace std;
void GetInputArray(int  a[Max] ,int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void GetOutputArray(int  a[Max] ,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void delete_value(int a[Max],int n,int k){   // xoa phan tu o vi tri thu k
    for(int i=k;i<n-1;i++){
a[i]=a[i+1];
    }
      n--;
      GetOutputArray(a,n);
}
void insert_value(int a[Max],int n,int& m,int& so ){
    cout<<"Nhap vi tri can chen: \n";
    cin>>m;
    cout<<"Nhap gia tri can chen: \n ";
    cin>>so;
       // chen them phan tu o vi tri thu m
n++;
    for(int i=n-1;i>m;i--){
a[i]=a[i-1];
    }
a[m]=so;
     
      GetOutputArray(a,n);
}
int main (){
int n,m,so;
int k;
cout<<"Nhap n: ";
cin>>n;
int a[Max];
cout<<"k= \n";
cin>>k;
GetInputArray(a,n);
delete_value(a,n,k);
cout<<endl;
insert_value(a,n,m,so);


    return 0;
}