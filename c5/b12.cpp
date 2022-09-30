#include <iostream>
#include <cmath>
using namespace std;

float Volume(float radious,float l){
return M_PI*pow(radious,2)*l;
}
int main (){
float r,l;
cout<<"Enter radious& height: ";
cin>>r>>l;
// tinh the tich hinh tru
cout<<"Volume of cylinder: "<<Volume(r,l);
    return 0;
}