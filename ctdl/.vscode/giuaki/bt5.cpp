#include <bits/stdc++.h>
using namespace std;

void GetInputNumber(float a[100],int n){
for(int i= 0;i<n;i++){
cout<<"a["<<i<<"]= ";
cin>>a[i];
}
}
void GetOutputNumber(float a[100],int n){
for(int i= 0;i<n;i++){
cout<<a[i]<<"  ";
}
}
void Show_MaxNumber(float a[100],int n){
    float max=a[0];
for(int i= 1;i<n;i++){
if(a[i]>max){
    max=a[i];
}
}
cout<<"\nPhan tu lon nhat cua mang la: "<<max<<endl;
}
int main (){
int n;
float a[100];
// so phan tu toi da cua mang la 100
do{
    cout<<"Nhap n: ";
    cin>>n;
} while(n<=0||n>100);
GetInputNumber(a,n);
GetOutputNumber(a,n);
Show_MaxNumber(a,n);

    return 0;
}