#include <bits/stdc++.h>
using namespace std;

void GetInput(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void GetOutput(int *a,int n){
    for(int i=0;i<n;i++){
      
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void NumberSeries(int *a,int n){
    GetOutput(a,n);
if(n==1){
  return;
}
    for(int i=0;i<n-1;i++){
      a[i]=a[i]+a[i+1];
        }
        NumberSeries(a,n-1);
    
}
int main (){
    int n;
int *a = new  int (n);
cout<<"Import number of array: ";
cin>>n;
GetInput(a,n);
NumberSeries(a,n);
delete a;
    return 0;
}