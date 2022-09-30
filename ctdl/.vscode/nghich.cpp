#include <iostream>
using namespace std;
int Nhapso(int n,int& max){
     cout<<"Nhap n: ";
    cin>>n;
    if(max<n){
        max=n;
    }
    if(n==0){
        cout<<"Max: "<<max;
        return 0;
    }
    return Nhapso(n,max);
    }
int main (){
int n;
int max=0;
Nhapso(n,max);
    return 0;
}