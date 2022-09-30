#include <iostream>
using namespace std;

int main (){
   double a,b;
   cout<<"Nhap a: ";
   cin>>a;
   cout<<"\nNhap b: ";
   cin>>b;
   if(a>b){
       double c;
       cout<<"Nhap c: ";
       cin>>c;
       cout<<(a-b)*c;
   }
   else {
       cout<<a*b;
   }
    return 0;
}