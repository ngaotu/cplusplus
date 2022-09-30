#include <bits/stdc++.h>
using namespace std;
float MaxNumber(float a, float b){
    if(a<b){
return b;
    }
    return a;
}
int main (){
float a,b,c;
cout<<"Nhap a, b ,c: ";
cin>>a>>b>>c;
cout<<"So lon nhat trong 3 so la: "<<MaxNumber(MaxNumber(a,b),c);
    return 0;
}