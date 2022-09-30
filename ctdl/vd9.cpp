#include<iostream>
#include<iomanip>
using namespace std;
class Thoigian1;
class Thoigian
{
private: 
int gio;
int phut;
int giay;
public:
Thoigian(int = 8, int = 5, int = 25);
operator Thoigian1();
void Hienthoigian();
void Nhap();
};
class Thoigian1
{
private:
long yyyymmdd;
public:
Thoigian1(long =0);
void Nhap1();
operator Thoigian();
void Hientg1();
};
Thoigian::Thoigian(int mm, int dd, int yyyy)
{
gio=mm; phut=dd; giay=yyyy;
}
void::Thoigian::Nhap(){
    cout<<"NHAP GIO PHUT GIAY: ";
    cin>>gio>>phut>>giay;
}
Thoigian::operator Thoigian1()
{
long temp;
temp=gio*3600+phut*60+giay;
return(Thoigian1(temp));
}
void ::Thoigian::Hienthoigian()
{
cout<<setfill('0')
 <<setw(2)<<gio<<" gio "
 <<setw(2)<<phut<<" phut "
 <<setw(2)<<giay<<" giay"<<endl;
return;
}
Thoigian1::Thoigian1(long ymd)
{
yyyymmdd=ymd;
}
void ::Thoigian1::Nhap1(){
cout<<"Nhap so giay: ";
cin>>yyyymmdd;

}
Thoigian1::operator Thoigian()
{
int mo, da, yr;
yr=int(yyyymmdd/3600.0);
mo=int(yyyymmdd-yr*3600.0)/60;
da=int(yyyymmdd-yr*3600.0-mo*60.0);
return(Thoigian(yr,mo,da));
}
void Thoigian1::Hientg1()
{
cout<<yyyymmdd<<endl;
return;
}
int main() {

Thoigian a,b;
Thoigian1 c, d;
a.Nhap();
c.Nhap1();
b=Thoigian(c);
d=Thoigian1(a);
cout<<"Thoi gian cua a: "; a.Hienthoigian();
cout<<"Sau khi chuyen doi kieu la: ";
d.Hientg1();
cout<<"Thoi gian cua c: ";
c.Hientg1();
cout<<"Sau khi chuyen doi kieu la: ";
b.Hienthoigian();
return 0;
}
