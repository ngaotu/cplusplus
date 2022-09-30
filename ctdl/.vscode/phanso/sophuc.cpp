#include <iostream>
#include <cmath>
using namespace std;
class Complex{
private:
float real,image;
public:
Complex(){

}
~Complex(){

}
friend istream &operator>>(istream&in , Complex&sp);
friend ostream &operator<<(ostream &o,Complex&sp);

Complex operator+(const  Complex &x){
 Complex sum;
 sum.real=real+x.real;
 sum.image=image+x.image;
 return sum;
}

Complex operator-(const  Complex &x){
 Complex sub;
 sub.real=real-x.real;
 sub.image=image-x.image;
 return sub;
}
// nhan hai so phuc
Complex operator*(const Complex&x){
Complex mutil;
mutil.real=real*x.real-image*x.image;
mutil.image=real*x.image+x.real*image;
return mutil;
}
// chia hai so phuc
Complex operator/(const Complex&x){
    Complex div;
    int temp=x.image*x.image+x.real*x.real;
    div.real=(real*x.real+image*x.image)/temp;
    div.image=(x.real*image-real*x.image)/temp;
    return div;
}
};
// nap chong toan tu xuat
ostream&operator<<(ostream &o,Complex&sp){
    if ( sp.image<0){
o<<sp.real<<sp.image<<"i";
    } else 
    if(sp.real>0){
    o<<sp.real<<"+"<<sp.image<<"i";
}
else {
    o<<sp.image<<"i";
}
return o;
}
istream&operator>>(istream&in,Complex&sp){
     cout<<"Enter complex number: ";
    in>>sp.real>>sp.image;
    return in;
}
int main (){
Complex sp,sp2,sp3;
cin>>sp>>sp2;
sp3=sp+sp2;
cout<<"Sum of two complex number: ";
cout<<"("<<sp<<") + "<<"("<<sp2<<") = "<<sp3;
sp3=sp-sp2;
cout<<"\nSub of two complex number: ";
cout<<"("<<sp<<") - "<<"("<<sp2<<") = "<<sp3;
cout<<"\nMutilp of two complex number: ";
sp3=sp*sp2;
cout<<"("<<sp<<") * "<<"("<<sp2<<") = "<<sp3;
cout<<"\nDivison of two complex number: ";
sp3=sp/sp2;
cout<<"("<<sp<<") / "<<"("<<sp2<<") = "<<sp3;
    return 0;
}