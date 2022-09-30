#include <bits/stdc++.h>
using namespace std;

int Sum(int a,int &sum){
int chuso;
a=abs(a);
while(a!=0){
    chuso=a%10;
    sum+=chuso;
    a=a/10;
}
return sum;
}
int main (){
int a;
cout<<"Nhap so: ";
cin>>a;
int sum=Sum(a,sum);
if(sum%3==0){
    cout<<a<<" chia het cho 3";
}
else {
    cout<<a<<" khong chia het cho 3";
}
    return 0;
}