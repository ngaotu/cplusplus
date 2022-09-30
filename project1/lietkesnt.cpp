#include <iostream>
#include <cmath>
using namespace std;
bool kiemtra(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
if(n%i==0){
    return false;
}
    }
    return true;
}
int main (){
    int n=1;
    int so;
    cout<<"Nhap so: \n";
cin>>so;
cout<<so<<" so nguyen to dau tien la: \n";
    while(so!=0){
        n++;
if(kiemtra(n)==true){
cout<<n<<" ";
so--;
}

    }
       
    return 0;
}
