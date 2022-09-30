#include <iostream>
using namespace std;

int main (){
    double a,b;
cout<<"Nhap a: ";
cin>>a;
cout<<"Nhap b: ";
cin>>b;
if(a<b){
    cout<<"b lon hon a";
}
else if(a==b){
    cout<<"a=b";
}
else {
    cout<<"a lon hon b";
}
    return 0;
}