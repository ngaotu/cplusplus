#include <iostream>
using namespace std;

int main (){
    double a,b;
   do{
cout<<"Nhap chieu dai: ";
cin>>a;
if(a<=0){
    cout<<"Du lieu nhap khong dung\n";
}
   } while(a<=0);
 do{
cout<<"Nhap chieu rong: ";
cin>>b;
if(b<=0){
    cout<<"Du lieu nhap khong dung\n";
}
   } while(b<=0);

   cout<<"S hcn la: "<<a*b;
    return 0;
}