#include <iostream>
using namespace std;
void Calcute(float x,float y){
float sum,sub,multi,div;
sum=x+y;
sub=x-y;
multi=x*y;
div=x/y;
cout<<"\nSum: "<<sum;
cout<<"\nSub: "<<sub;
cout<<"\nMulti: "<<multi;
cout<<"\nDiv: "<<div;
}
int main (){
float x,y;
cout<<"Enter x,y: ";
cin>>x>>y;
Calcute(x,y);
    return 0;
}