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
int x=2;
int sum=0;
while(x<100){
if(Ktra__snt(x)==1){
    cout<<x<<" ";
sum+=x;
}
x++;
}
cout<<"\nTong cac so nguyen to tu 1 den 100 la: "<<sum<<endl;
    return 0;
}