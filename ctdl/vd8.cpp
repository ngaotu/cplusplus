#include<iostream>
using namespace std;

class Thoigian{
private:
int gio,phut,giay;
public:
Thoigian(int = 5,int= 6 ,int= 7 );
operator long();  // chuyen doi tu lop sang kieu co so (long)
void nhap();
void xuat();

};
Thoigian::Thoigian(int gio,int phut,int giay){
    this->gio=gio;
    this->phut=phut;
    this->giay=giay;
}
void::Thoigian::nhap(){
    cout<<"Nhap gio: ";
    cin>>this->gio;
    cout<<"Nhap phut: ";
    cin>>this->phut;
    cout<<"Nhap giay: ";
    cin>>this->giay;
}
void::Thoigian::xuat(){
    cout<<this->gio<<" gio "<<this->phut<<" phut "<<this->giay<<" giay "<<endl;
}
Thoigian::operator long(){
    long tg1;
    tg1=gio*3600+phut*60+giay;
    return tg1;
}

int main() {
Thoigian a,c;
a.nhap();
a.xuat();
c.nhap();
c.xuat();
long b,d;
b=a;
d=c;
cout<<b<<" "<<d;
return 0;
}