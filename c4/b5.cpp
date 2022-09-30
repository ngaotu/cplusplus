#include <iostream>
#include <cmath>
using namespace std;
int main (){
double s=0;
int n;
cout<<"Nhap n: ";
cin>>n;
int mauso=0;
for(int i=1;i<=n;i++){
mauso+=pow(i,2);
s+=pow(-1,i+1)/mauso;
}
cout<<"Tong s: "<<s<<endl;
    return 0;
}