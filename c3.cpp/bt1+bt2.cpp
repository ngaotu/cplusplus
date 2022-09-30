#include <iostream>
#include <cmath>
using namespace std;

//b1
void check_Odd_Even(int & so){
    do{
    cout<<"Nhap so: \n";
    cin>>so;} while (so<0);
if(so%2==0){
    cout<<so<<" la so chan"<<endl;
} else {
    cout<<so<<" la so le"<<endl;
}
}
//b2 -pa
void thetich(int &r){
    do {
cout<<"Nhap ban kinh: ";
cin>>r;

    } while (r<=0);
    double v;
    v=4/3*M_PI*r*r*r;
    cout<<"The tich: "<<v;
}
//b2-pb
void MaxValue(int &a,int &b,int &c,int& d){
    cout<<"Nhap a: \n";
    cin>>a;
    cout<<"Nhap b: \n";
    cin>>b;
    cout<<"Nhap c: \n";
    cin>>c;
    cout<<"Nhap d: \n";
    cin>>d;
    int max=a;
    if(max<b){
        max=b;
    }
     if(max<c){
        max=c;
    }
     if(max<d){
        max=d;
    }
    cout<<"Max: "<<max;
}

//b2-pc
double function(int &x){
    cout<<"\nNhap x:";
    cin>>x;
    if(x<=0){
return 0;
    }
    if(0<x&&x<=2){
        return x*x-x;
    }
    if(x>2){
        return x*x-sin(M_PI*x*x);
    }
}
//b2-p4
double Tinh(int &m,int &n){
    cout<<"\nNhap m:";
    cin>>m;
    cout<<"\nNhap n:";
    cin>>n;
    if(m<=0){
        return m*m+n*n;
    } 
    if(n<=0){
        return sqrt(m)+n*n;
    }
    if(m>0&&n>0){
        return sqrt(m)+sqrt(n);
    }
}
int main (){
int so,r,a,b,c,d,x,m,n;
check_Odd_Even(so);
thetich(r);
cout<<endl;
MaxValue(a,b,c,d);
cout<<"\nGia tri ham so la: "<<function(x);
cout<<"\nKQ: "<<Tinh(m,n);
system("pause");
    return 0;
}