#include<iostream>
#include<iomanip>
using namespace std;
class Sophuc
 {
private: 
int r;
int i;
public:
Sophuc(int = 9, int =4);
void operator =(Sophuc&);
void Inketqua();
 };
Sophuc::Sophuc(int x, int y)
{
r = x; i =y;
}
void::Sophuc::operator=(Sophuc& Sophucmoi)
{
r= Sophucmoi.r;
i= Sophucmoi.i;
return;
}
void Sophuc::Inketqua()
{
cout<<"so phuc la: ";
cout<<r<<"+"<<i<<"i"<<endl;
 return;
}
int main() {
Sophuc a(7,1), b(6,15);
cout<<"Gia tri du lieu ban dau ";
a.Inketqua();
a = b;
cout<<"Sau khi gan ta co ";
a.Inketqua();
return 0;
}