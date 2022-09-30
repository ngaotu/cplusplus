#include <iostream>
#include <cmath>
using namespace std;
bool snt(int so){
    if(so<=1){
        return false ;
    }
    for(int i=2;i<=sqrt(so);i++){
        if(so%i==0){
            return false;
        }
    }
    return true;
}
int main (){
    int so;
    cout<<"Nhap so: ";
    cin>>so;
    cout<<so<<"= ";
    int i=2;
while(so!=1){
    if(so%i==0){
        if(snt(i)==true){
            cout<<i;
        } 
        if(so>i){
            cout<<"*";
        }
        so=so/i;
    }
    else {
i++;
        }
}
    return 0;
}