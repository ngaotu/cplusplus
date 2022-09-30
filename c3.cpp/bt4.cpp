#include <iostream>
using namespace std;

int main (){
    double d;
cout<<"Nhap diem trung binh: ";
cin>>d;
if(d<4){
    cout<<"Diem F";
}
if(d<=5.4&&d>=4){
    cout<<"Diem D";
}
if(d<=6.9&&d>=5.5){
    cout<<"Diem C";
}
if(d<=8.4&&d>=7){
    cout<<"Diem B";
}
if(d<10&&d>=8.5){
    cout<<"Diem A";
}

    return 0;
}