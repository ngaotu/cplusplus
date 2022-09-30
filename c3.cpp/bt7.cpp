#include <iostream>
using namespace std;

int main (){
    double x,y;
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"\nNhap y: ";
    cin>>y;
    if((x>y)&&(y!=0)){
        cout<<x/y;
    }
    else {
        cout<<x*y;
    }
    return 0;
}