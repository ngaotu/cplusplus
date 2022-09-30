#include <iostream>
using namespace std;
int UCLN(int a, int b){
    int r;
    while(b!=0){
r=a%b;
a=b;
b=r;
    }
    return a;
}
int main (){
int a,b;
do{
cout<<"a= ";
cin>>a;
} while(a<0);

do{
cout<<"b= ";
cin>>b;
} while(b<0);

cout<<"UCLN cua 2 so la:  "<<UCLN(a,b);
return 0;
}