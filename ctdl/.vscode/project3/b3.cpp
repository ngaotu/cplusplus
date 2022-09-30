#include <iostream>
#include <cmath>
using namespace std;

// tinh tong s = 1-1/3+1/5+...+(-1)^(n+1)*1/(2n-1)
int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
double s=0;
for(int i=1;i<=n;i++){
s+=pow(-1,i+1)/(2*i-1);
}
cout<<"Tong la: "<<s;
    return 0;
}