#include <iostream>
#include <cmath>
using namespace std;
float Radious(float per){
    return per/(2*M_PI);
}
int main (){
float r,per;
cout<<"Enter perimeter: ";
cin>>per;
r=Radious(per);
cout<<"\nArea: "<<(r*r*M_PI);
    return 0;
}