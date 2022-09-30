#include <iostream>
using namespace std;

int main (){
    double d;
cout<<"Nhap diem trung binh: ";
cin>>d;
if(d<5){
    cout<<"Hoc sinh kem";
}
if(d<7&&d>=5){
    cout<<"Hoc sinh trung binh";
}
if(d<8.5&&d>=7){
    cout<<"Hoc sinh kha";
}
if(d<10&&d>=8.5){
    cout<<"Hoc sinh gioi";
}

    return 0;
}