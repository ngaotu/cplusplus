#include <iostream>
#include <cmath>
using namespace std;

void circle(float radious , float &area,float &per){
area=M_PI*radious*radious;
per=M_PI*2*radious;
}
int main(){
float r;
cout<<"Enter radious: ";
cin>>r;
float a,p;
circle(r,a,p);
cout<<"Area: "<<a;
cout<<"\nPerimeter: "<<p;
return 0;
}