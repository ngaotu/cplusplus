#include <iostream>
#include <cmath>
using namespace std;
int main (){
int n;
do{
cout<<"Nhap n: ";
cin>>n;

} while(n<=0);

if(n<10){
cout<<"So doi xung";
} else {
int chuso=0;
int m=n;
while(n!=0){

chuso=chuso*10+n%10;
n=n/10;

}
if(m==chuso){
    cout<<"So doi xung";
} else {
    cout<<"So khong doi xung";
}
}
return 0;    
}