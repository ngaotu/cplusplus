#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct Mat_hang
{
    string ten;
    string donvitinh;
    int soluong;
    double don_gia;
};
void Nhapdanhsach(Mat_hang Danhsach[],int n){
    for(int i=0;i<n;i++){
        cin.ignore();
         cout<<".Ten mat hang: ";
      getline ( cin,Danhsach[i].ten);
 cout<<".Ten don vi tinh: ";
      getline ( cin,Danhsach[i].donvitinh);
      cout<<".So luong hang: ";
      cin>>Danhsach[i].soluong;
       cout<<".Don gia: ";
      cin>>Danhsach[i].don_gia;
    }
}
void Xuatdanhsach(Mat_hang Danhsach[],int n){
    for(int i=0;i<n;i++){
        cout<<"\n\t.Ten mat hang: ";
      cout<<Danhsach[i].ten;
     cout<<"\n\t.Ten don vi tinh: ";
     cout<<Danhsach[i].donvitinh;
     cout<<"\n\t.So luong hang: ";
      cout<<Danhsach[i].soluong;
      cout<<"\n\t.Don gia: ";
      cout<<Danhsach[i].don_gia;
      cout<<"\n============================="<<endl;
    }
}

int main(){
Mat_hang Danhsach[100];
int n;
cout<<"Nhap n: ";
cin>>n;
Nhapdanhsach(Danhsach,n);
Xuatdanhsach(Danhsach,n);
    return 0;
}