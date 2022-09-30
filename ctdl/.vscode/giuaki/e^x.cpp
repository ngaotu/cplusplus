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
 float Exp(int x){
float e=1; // khai bao sai so hien tai la 1
int n=0;
float exp=0;
while(e>=eps){
    e=pow(x,n)/factorial(n);
    exp+=e;
n++;
}
return exp;
 }

 int main (){
int x;
cout<<"Enter e^x: ";
cin>>x;
cout<<"e^"<<x<<"= "<<Exp(x);
     return 0;

}