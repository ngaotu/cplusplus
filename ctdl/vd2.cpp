#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Thoigian {
private:
// static double heso1=0.09 ;         // khai bao bien toan cuc
int gio,phut,giay;
public:
Thoigian(int = 7,int =50,int= 20);
void operator= (Thoigian&);
void Inkq();

} ;

Thoigian :: Thoigian(int a,int b,int c) {
    gio =a;
    phut=b;
    giay=c;
}
void::Thoigian :: operator=(Thoigian&Thoigian1){
gio=Thoigian1.gio;
phut=Thoigian1.phut;
giay=Thoigian1.giay;
return ;
}
void ::Thoigian::Inkq(){
    cout<<"Ngay,thang,nam la:  ";
    cout<<setfill('0')
    <<setw(2)<<gio<<'/'<<setw(2)<<phut<<'/'<<setw(4)<<giay;
    cout<<endl;
    return; 

}

int main (){
Thoigian a(4,13,29);
Thoigian b(6,6,6);
a.Inkq();

a=b;
a.Inkq();
    return 0;
}
