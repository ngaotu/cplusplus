#include <bits/stdc++.h>
using namespace std;

float Distance(float Ax, float Ay, float Bx, float By){
    return sqrt( pow(Ax-Bx,2)+pow(Ay-By,2));
}
int main (){
float Ax,Bx,Ay,By,Cx,Cy;
cout<<"Nhap toan do diem A: ";
cin>>Ax>>Ay;
cout<<"Nhap toa do diem B: ";
cin>>Bx>>By;
cout<<"Nhap toa do diem C: ";
cin>>Cx>>Cy;
float AB,BC,CA,p,area;
AB=Distance(Ax,Ay,Bx,By);
BC= Distance(Bx,By,Cx,Cy);
CA= Distance(Cx,Cy,Ax,Ay);
if(AB+BC>CA && AB+ CA > BC & CA+ BC > AB) {
p=(AB+BC+CA)/2;
area= sqrt(p*(p-AB)*(p-BC)*(p-CA));
cout<<"Dien tich tam giac ABC la: "<<area<<endl;
}
else {
    cout<<"Ba diem A, B, C khong tao thanh 1 tam giac"<<endl;
}

    return 0;
}