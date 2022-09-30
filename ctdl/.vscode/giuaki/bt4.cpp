#include <bits/stdc++.h>
using namespace std;

int Sum(int x){
    x=abs(x);
    int chuso;
    int sum=0;
    while(x!=0){
        chuso=x%10;
sum+=chuso;
x=x/10;
    }
    return sum;
}

int main (){
int x;
cout<<"Nhap so x: ";
cin>>x;
cout<<"\nTong cac chu so la: "<<Sum(x)<<endl;
    return 0;
}