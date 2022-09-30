#include<iostream>
#include<cmath>
const double PI= 2.0 * asin(1.0);
using namespace std;
class Hinhchunhat
{
protected: 
double a,b;
public:
Hinhchunhat(double = 1.0, double =2.0);
void Nhap();
double dt();
};
Hinhchunhat::Hinhchunhat(double val, double val2)
{
a = val; b = val2;
}
void Hinhchunhat::Nhap(){
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
double Hinhchunhat::dt()
{
return (a*b);
}
class Hinhhop : public Hinhchunhat
{
protected:
 double h;
public:
Hinhhop(double h=2.0);
double dt();
};
Hinhhop::Hinhhop(double p2)
{ h=p2;
}
double Hinhhop::dt()
{
 void Nhap();
 return h*a*b;

}
int main() {
    Hinhchunhat a1;
    a1.Nhap();
    cout<<a1.dt();
cout<<"Vi du ve tinh ke thua trong C++"<<endl;
cout<<"Lop hinh hop duoc ke thua tu lop hinh chu nhat: "<<endl; 
Hinhhop o1(5);
cout<<"The tich hinh hop: "<<o1.dt()<<endl;
return 0;
}
