#include <iostream>
#define Max 30
using namespace std;
void testvalue(int a[Max],int n){
for(int i=0;i<n;i++){                     //  nhap mang dau vao 
    cout<<"a["<<i<<"]= ";
    cin>>a[i];
}
}
double calcavg(int a[Max],int n,double& tb){        // tinh gia tri trung binh cua mang test
double sum=0;
for(int i=0;i<n;i++){
    sum+=a[i];
}
tb=(sum/n)*1.0;
    return tb;
}
void variance(int a[Max],int  n , double tb){
    double tg[Max];                                  // dua ra man hinh mang tg thoa man tg[i]=a[i]-tb
    for(int i=0;i<n;i++){
        tg[i]=a[i]-tb;
    }
    for(int i=0;i<n;i++){
        cout<<tg[i]<<" ";
    }
}

int main (){
int n;
cout<<"Nhap n: \n";
cin>>n;
int a[Max];
double tb;
testvalue(a,n);
cout<<calcavg(a,n,tb);
cout<<endl;
variance(a,n,tb);
    return 0;
}