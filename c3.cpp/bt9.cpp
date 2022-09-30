#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double x,y;
cout<<"Nhap x: ";
cin>>x;
cout<<"\nNhap y: ";
cin>>y;
if(abs(x-y)<0.00005){
    cout<<"Sai so la 0";
} else {
    cout<<"Sai so la: "<<abs(x-y)/2;
}
    return 0;
}