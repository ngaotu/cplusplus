#include <bits/stdc++.h>
using namespace std;
int UCLN(int a,int b){
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
cout<<"Nhap tu so: ";
cin>>a;
do{
cout<<"Nhap mau so: ";
cin>>b;
} while(b==0);
if(UCLN(a,b)==1){
    cout<<"Phan so toi gian";
}
else {
    cout<<"Phan so chua toi gian";
}


    return 0;
}