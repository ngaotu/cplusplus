#include <iostream>
#include <cmath>
using namespace std;

float Area(float radious,float l){
return M_PI*radious*2*l;
}
int main (){
float r,l;
cout<<"Enter radious& height: ";
cin>>r>>l;
// tinh dien  tich hinh tru
cout<<"Area of cylinder: "<<Area(r,l);
    return 0;
}