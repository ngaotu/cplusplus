#include <iostream>
using namespace std;
class hcn{
protected:
double a,b;
double dt;
public:

hcn(double =1,double=1 );
void nhap();
double tinhcvi();
double tinhdientich();
};
hcn::hcn(double a,double b){
this->a=a;
this->b=b;
}
void hcn::nhap(){
    do {
    cout<<"\nNhap chieu dai: ";
    cin>>a;
    if(a<=0){
        cout<<"\nvui long nhap lai chieu dai!";
    }
    } while(a<=0);
    do{
    cout<<"\nNhap chieu rong: ";
    cin>>b;
    if(b<=0){
        cout<<"\n vui long nhap lai chieu rong\n";
    }
    }
    while(b<=0);
}
double hcn::tinhcvi(){
    return (a+b)*2;
}

double hcn::tinhdientich(){
    dt=a*b;
    return dt;
}
class Hopchunhat:public hcn{                     // lop dan xuat ( tinh ke thua)
protected:
double h;
public:
Hopchunhat(double=1);
void Nhap();
double Thetich();
};
Hopchunhat::Hopchunhat(double h){
    this->h=h;
}
void Hopchunhat::Nhap(){
    do{
        cout<<"\nNhap chieu cao: ";
        cin>>this->h;
        if(h<=0){
            cout<<"\nNhap lai";
        }
    } while(h<=0);
}
double::Hopchunhat::Thetich(){
  return (h*hcn::tinhdientich());
}
int main (){
hcn a1;
a1.nhap();
cout<<a1.tinhdientich()<<endl;
cout<<a1.tinhcvi();
Hopchunhat h1;
h1.Nhap();
cout<<h1.Thetich();
    return 0;
}