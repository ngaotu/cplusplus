#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
ifstream filein;
// ung dung cau truc dai so vao lap trinh
class Fraction {   // lop phan so
private:
int tuso,mauso;

public:

// ham khoi tao 
Fraction(){

}
//ham huy
~Fraction(){

}
// ham nhap phan so
 void Input(){

 cout<<"Nhap tu so: ";
 cin>>tuso;
 do{
 cout<<"Nhap mau so: ";
 cin>>mauso;
 if(mauso==0){
     cout<<"Phan so khong ton tai. Vui long nhap lai mau so ! \n";
 }
 } while(mauso==0);
 }
int Ucln( int a, int b){   // tim uoc chung lon nhat cua tu so va mau so
int r;
 
a=abs(a);
b=abs(b);
    while(b != 0) {
        r = a % b; // r la so du phep chia a cho b
        a = b;
        b = r;
    }
    return a;
}
// ham rut gon phan so
void Rutgonphanso(){
    int uc=Ucln(tuso,mauso);
    tuso=tuso/uc;
    mauso=mauso/uc;
}
// ham xuat phan so
void Output(){
Rutgonphanso();
cout<<tuso<<"/"<<mauso;
}
// dinh nghia toan tu + cho lop phan so
Fraction operator+(const Fraction&p){
    Fraction sum;
    sum.tuso=tuso*p.mauso+p.tuso*mauso;
    sum.mauso=mauso*p.mauso;
    sum.Rutgonphanso();
    return sum;
}
// dinh nghia toan tu tru cho lop phan so
Fraction operator-(const Fraction&p){
    Fraction sub;
    sub.tuso=tuso*p.mauso-p.tuso*mauso;
    sub.mauso=mauso*p.mauso;
    sub.Rutgonphanso();
    return sub;
}
//  dinh nghia toan tu nhan cho lop phan so
Fraction operator*(const Fraction&p){
    Fraction mutil;
    mutil.tuso=tuso*p.tuso;
    mutil.mauso=mauso*p.mauso;
    mutil.Rutgonphanso();
    return mutil;
}
// dinh nghia toan tu chia cho lop phan so
Fraction operator/(const Fraction&p){
    Fraction div;
    div.tuso=tuso*p.mauso;
    div.mauso=mauso*p.tuso;
    div.Rutgonphanso();
    return div;
}
// hai phan so bang nhau khi hieu hai phan so co tu so =0
bool sosanhbang(){
    if(tuso==0){
        return true;
    }
    return false;
}
// ham so sanh hieu hai   phan so voi 0 
bool sosanh(){
    if(tuso<0||mauso<0){
        return false;
    }
    return true;
}
// chuan hoa phan so ( khi mau so == 1 thi chi in ra tu so  )
 int Getter_mauso(){
    return mauso;
}
int Getter_tuso(){
    return tuso;
}


};
void Menu(Fraction x, Fraction y,Fraction z){
    x.Input();
y.Input();
cout<<"Phan so thu 1: ";
x.Output();
cout<<endl;
cout<<"Phan so thu 2: ";
y.Output();
int choose;
while(true){
cout<<"\n\t\t========Chuong Trinh Phan So======== ";
cout<<"\n\t1.Tinh tong hai phan so";
cout<<"\n\t2.Tinh hieu hai phan so";
cout<<"\n\t3.Tinh tich hai phan so";
cout<<"\n\t4.Tinh thuong hai phan so";
cout<<"\n\t5.So sanh hai phan so";
cout<<"\n\t6.Thoat";
cout<<"\n\t\t==============  End  ==============";
cout<<"\n\t.Nhap lua chon cua ban: ";
cin>>choose;

if(choose==1){
    system("cls");
z=x.operator+(y);

cout<<" Tong hai phan so tren la: ";
if(z.Getter_mauso()==1){
 cout<< z.Getter_tuso();
} else {
z.Output();
}
}


if(choose==2){
    system("cls");
z=x.operator-(y);
cout<<"Hieu hai phan so tren la: ";
if(z.Getter_mauso()==1){
 cout<< z.Getter_tuso();
} else {
z.Output();
}
}
if(choose==3){
    system("cls");
z=x.operator*(y);
cout<<"\nTich hai phan so tren la: ";
if(z.Getter_mauso()==1){
 cout<< z.Getter_tuso();
} else {
z.Output();
}
}
if(choose==4){
    system("cls");
z=x.operator/(y);
cout<<"\nThuong hai phan so tren la: ";
if(z.Getter_mauso()==1){
 cout<< z.Getter_tuso();
} else {
z.Output();
}
}
if(choose==5){
    system("cls");
z=x.operator-(y);
if(z.sosanhbang()==true){
cout<<"Hai phan so bang nhau";
}
else
if(z.sosanh()==false){
cout<<"Phan so thu 1 nho hon phan so thu 2";
}
else {
    cout<<"Phan so thu 1 lon hon phan so thu 2";
}
}


if(choose==6){
    system("cls");
    cout<<"\n\t\t.Ket thuc chuong trinh ";
    break;
}
}
}
 int main (){
    
Fraction x,y,z;
Menu(x,y,z);
     return 0;
 }