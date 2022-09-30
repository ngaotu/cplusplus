#include <iostream>
#include <cmath>
using namespace std;
bool Check_Snt(int so){
    if(so<=1){
        return false;
    }
    for(int i=2;i<=sqrt(so);i++){
        if(so%i==0){
            return false;
        }
    }
    return true;
}
int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
int so=2;
cout<<n<<" so nguyen to dau tien la: ";
while(n!=0){
    if(Check_Snt(so)==true){
        cout<<so<<" ";
        n--;
    }
so++;
}
    return 0;
}