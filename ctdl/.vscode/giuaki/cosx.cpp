#include <iostream>
#include <cmath>
using namespace std;
#define eps 0.0001   // dinh nghia sai so la 10^-4
// tinh giai thua
 float factorial(int n){
     if(n==0||n==1){
         return 1;
     }
     return factorial(n-1)*n;
 }
 // ham doi do sang radian
 float Convert(float & x){
return x=x*M_PI/180;
 }
 // ham tinh sin(X)
float Cos(float x){
    Convert(x);
    int n=0; 
   float temp=1; // sai so ban dau la 1
    float cos=0;
    // lap cho den khi sai  hien tai so be  hon eps
    while(abs(temp)>=eps){
        temp=(pow(-1,n)*pow(x,2*n))/factorial(2*n);
        cos+=temp;
        n++;
    }
    return cos;
}

int main (){
float x;
cout<<"Enter Angle(D): ";
cin>>x;
cout<<"Cos("<<x<<")= "<<Cos(x)<<"\n";
system("pause");
    return 0;
}