#include<iostream>
using namespace std;
class Thoigian
{
private: 
int gio;
int phut;
int giay;
public:
Thoigian(int = 7, int =4, int =10); 
bool operator==(Thoigian);
};
Thoigian::Thoigian(int x, int y, int z)
{
gio=x; phut=y; giay = z;
}
bool Thoigian::operator==(Thoigian t)
{
if ((gio ==t.gio) && (phut == t.phut) && (giay == 
t.giay))
return true;
else
return false;
}
int main() {

Thoigian m(4,1,10), n(7, 10, 10);
cout<<"Vi du ve ham toan tu so sanh == trong C++: "<<endl;
if (m==n)
cout<<"m va n bang nhau "<<endl;
else
cout<<"m va n khac nhau "<<endl;
return 0;
}