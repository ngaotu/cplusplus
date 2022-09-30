#include <iostream>
#include <cmath>
using namespace std;
bool kiemtra(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<sqrt(n);i++){
if(n%i==0){
    return false;
}
    }
    return true;
}
int main (){
    int n;
    cout<<"nhap n : \n";
    cin>>n;
    if(kiemtra(n)==true){
        cout<<n<<" la so nguyen to\n";
    } else {
        cout<<n<<" khong la so nguyen to\n";
    
    }
    return 0;
}
