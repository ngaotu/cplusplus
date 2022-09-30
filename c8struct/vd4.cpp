#include <bits/stdc++.h>
using namespace std;

 struct Complex{
     float real;
     float image;

 };  
 void GetInput(Complex & s){
   cout<<"Input real number: ";
   cin>>s.real;
   cout<<"Input image number: ";
   cin>>s.image;
 } 
 void GetOutput(Complex s){
     if(s.image>0){
     cout<<s.real<<"+"<<s.image<<"i";
     }
     else if (s.image==0){
      cout<<s.real;
     }
     else {
         cout<<s.real<<s.image<<"i";
     }
     cout<<endl;
 }
 Complex SumComplex(Complex s, Complex r){
     Complex sum;
     sum.image = s.image+ r.image;
     sum.real= s.real+r.real;
     return sum;
 }         
 Complex MuptilComplex(Complex s, Complex r){
     Complex muptil;
     muptil.image = s.image*r.real+r.image*s.real;
     muptil.real= s.real*r.real-s.image*r.image;
     return muptil;
 }                                                        
int main (){
 Complex x;
 GetInput(x);
 Complex y;
 GetInput(y);
 GetOutput(x);
 GetOutput(y);
 GetOutput(SumComplex(x,y));
 GetOutput(MuptilComplex(x,y));
    return 0;
}