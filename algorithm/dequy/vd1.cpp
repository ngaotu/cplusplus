#include <bits/stdc++.h>
using namespace std;
int n;
void InputNumber( int a[]){
    for(int i =0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void ShowResult(int a[]){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void NumberSeries(int n,int a[]){
if(n==0){
   return;
}
for( int i=0;i<n-1;i++){
a[i]=(a[i]+a[i+1]);
}
for(int i =0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
NumberSeries(n-1,a);
}
int main (){
    int t;
    cout<<"Test case: ";
    cin>>t;
int a[100];
while(t>0){
cout<<"Nhap n: ";
cin>>n;
InputNumber(a);
ShowResult(a);
NumberSeries(n,a);
t--;
}
    return 0;
}