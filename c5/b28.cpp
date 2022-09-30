#include <iostream>
#include <cmath>
using namespace std;
// lam tron den n chu so sau dau phay 
double Complute(double a,int n){
a*=pow(10,n);
a+=0.5;
int temp=a;
a=a-(a-temp);
a/=pow(10,n);
return a;
}


int main (){
double a;
int n;
cout<<"Enter a ,n : ";
cin>>a>>n;
cout<<"Result after: "<<Complute(a,n);
    return 0;
}