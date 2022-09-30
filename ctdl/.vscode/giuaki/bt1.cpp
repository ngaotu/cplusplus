#include <iostream>
#include <cmath>
using namespace std;
void ptb1(float a,float b,float &x){
    // float x;
    if(a==0)
    {
      if(b==0)
      {
         x=0;
         
      }
      else 
      {
        x=-1;
      }
    }
    else 
    {
     x=1;
    }
}
int main () {
float a,b,x;
cout<<"Nhap a: ";
cin>>a;
cout<<"Nhap b: ";
cin>>b;
ptb1(a,b,x);
if(x==0){
cout<<"Phuong trinh co vo so nghiem";
}
 if (x==-1){
    cout<<"Phuong trinh  vo nghiem" ;
}
if(x==1){
    cout<<"Phuong trinh co nghiem la: "<<-b/(a*1.0)<<endl;
}

return 0;
}