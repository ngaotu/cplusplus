#include <iostream>
#include <cmath>
using namespace std;
#define eps 0.001
float Sqrt(int a){
    float x,xNext;
    x=1;
xNext=(x+a/x)/2;
while(abs(x-xNext)>=eps){
x=xNext;
xNext=(x+a/x)/2;
}
return xNext;
}
int main (){
int a;
cout<<"Enter a: ";
cin>>a;
cout<<"Square of a: "<<Sqrt(a);

    return 0;
}