#include <iostream>
#include <cmath>
using namespace std;
 class thoigian {
private:
int gio,phut,giay;
public:
thoigian(int =7,int =5,int =30);
void Datthoigian(int,int ,int);
void Hienthithoigian();

 };
 thoigian::thoigian(int hour,int minutes,int seconds){
     gio=hour;
     phut=minutes;
     giay=seconds;
     return;
 }
 void:: thoigian::Datthoigian(int g,int p,int gi){
     gio=g;
     phut=p;
     giay=gi;
     return;
 }
 void thoigian::Hienthithoigian()
 {
     cout<<"Thoi gian la: ";
     cout<<gio<<"gio"<<phut<<"phut"<<giay<<"giay"<<endl;
     return;
 }


int main (){
   thoigian a ,b,c;
   a.Datthoigian(6,23,46);
   a.Hienthithoigian();
   b.Datthoigian(5,3,4);
   b.Hienthithoigian();


       
    return 0;
}
