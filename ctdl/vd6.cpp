#include <iostream>
using namespace std;

class Sophuc{
private:
int x,i;
public:
Sophuc(int x=0,int i=0);
 void Xuat();
 void Nhap();
Sophuc operator+(Sophuc a);

};
void::Sophuc::Nhap(){
    cout<<"Nhap so phuc: ";
    cin>>this->x>>this->i;
}
Sophuc:: Sophuc(int x,int i){
    this->x=x;
    this->i=i;
}
void::Sophuc::Xuat(){
    cout<<this->x<<" + "<<this->i<<"i ";
}
Sophuc Sophuc::operator+(Sophuc a){
Sophuc b;
b.x=x+a.x;
b.i=x+a.i;
return b;
}

int main (){
Sophuc a,b;
a.Nhap();
a.Xuat();
cout<<endl;
b.Nhap();
b.Xuat();
Sophuc c;

cout<<"\n tong hai so phuc ";
(a+b).Xuat();
    return 0;
}