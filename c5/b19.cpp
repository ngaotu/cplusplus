#include <iostream>
using namespace std;
// tinh luy thua
float Exponentiation(float x ,float y){
float pow=1;
while(y!=0){
    pow*=x;
    y--;
}
return pow;
}
int main (){
float x,y;
cout<<"Enter X,Y: ";
cin>>x>>y;
cout<<x<<"^"<<y<<" = "<<Exponentiation(x,y);
    return 0;
}
