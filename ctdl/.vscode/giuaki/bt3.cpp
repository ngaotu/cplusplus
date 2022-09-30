#include <bits/stdc++.h>
using namespace std;

int Ktra__snt(int x){
    if(x<=1){
        return 0;
    }
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main (){
int x;
do {
cout<<"Nhap so nguyen duong x: ";
cin>>x;
} while ( x<=0);
if(Ktra__snt(x)==1){
    cout<<x<<" la so nguyen to";
}
else {
    cout<<x<<" khong la so nguyen to";
}
    return 0;
}
