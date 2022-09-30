#include <iostream>
#include <cmath>
using namespace std;
// tim ucln cho 2 so tu do suy ra ucln cho 3 so
int UCLN(int a,int b){
int r; // so du phep chia a cho b
while(b!=0){
r=a%b;
a=b;
b=r;
}
return a;
}
int main (){
 int a,b,c;
 cout<<"Nhap a b c: ";
 cin>>a>>b>>c;
 cout<<endl;
int uc;
 uc=UCLN(a,b);
 cout<<"Uoc chung lon nhat cua 3 so la: "<<UCLN(uc,c);
// int n;
// cout<<"Enter n: ";
// cin>>n;
// int arr[20];
// for(int i=1;i<=n;i++){
// cout<<"Enter value: ";
// cin>>arr[i];
// }
// uc=arr[1];
// for(int i=2;i<=n;i++){
// uc=UCLN(arr[i],uc);
// }
// cout<<uc<<" ";
    return 0;
}