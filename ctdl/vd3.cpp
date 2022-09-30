#include <iostream>
#include <cmath>
using namespace std;
class Points{
private:
int x,y;
public:                           // khao bao cac phuong thuc 
void Khoitao(int xx=0,int yy=0);
 void Nhap();
 void Xuat();
 void Dichuyen();
 bool Check(Points n);                  // kiem tra 2 diem co trung nhau khong
 double Khoangcach(Points u);       // tinh hkoang cach hai diem
 Points DoixungOx();
 Points DoixungOy();    // co the su dung doi tuong nhu gia tri tra ve cua phuong thuc
};
                                                          // dinh nghia cac phuong thuc
void::Points::Khoitao(int xx,int yy){
    x=xx;                                // ham khoi tao gia tri cho lop
    y=yy;
}
Points Points::DoixungOx(){
    Points c;
    c.x=x;
    c.y=-y;
    return c;
}
Points Points::DoixungOy(){
    Points d;
    d.Khoitao(-x,y);
    return d;
}

void::Points::Nhap(){
    cout<<"Nhap x va y: ";
    cin>>x>>y;
}
void::Points::Xuat(){
    cout<<"Diem: "<<x<<"  "<<y<<endl;
}
void::Points::Dichuyen(){
    int dx,dy;
 cout<<"Nhap d va dy: ";
    cin>>dx>>dy;
x+=dx;
y+=dy;


}
bool::Points::Check(Points n){
    if((x==n.x)&&(y==n.y)){
        return false;
    }
    return true;
}
double::Points::Khoangcach(Points u){
cout<<"Khoang cach giua 2 diem la: ";
return sqrt(pow(x-u.x,2)+pow(y-u.y,2));
}


int main (){
 Points a,b,c;
//  a.Khoitao(3);
//  a.Xuat();
 a.Nhap();
 a.Xuat();
//  a.Dichuyen();
//     a.Xuat();
b.Nhap();
b.Xuat();
 cout<<a.Khoangcach(b)<<endl;
 if(a.Check(b)==false){
     cout<<"TRUNG NHAU \n";
 } else {
     cout<<"Khong trung nhau \n";
 }
 c=a.DoixungOy();
 c.Xuat();

    return 0;
}