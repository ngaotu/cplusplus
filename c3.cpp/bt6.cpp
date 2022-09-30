#include <iostream>
using namespace std;

int main (){
   double so;
   cout<<"Nhap so: ";
   cin>>so;
   if(so<0){
       cout<<"So am";
   } 
   if(so==0){
       cout<<"So 0";
   }
   if(so>0){
       cout<<"So duong";
   }

    return 0;
}