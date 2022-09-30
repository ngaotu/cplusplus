//  thaut toan sap xep noi bot
#include <bits/stdc++.h>
using namespace std;
/*

*/
void GetInput(int a[],int &n){
    cout<<"Enter number of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void PrintResult(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void BubbleSort(int a[], int n){
   for(int i=0;i<n-1;i++){
for(int j=n-1;j>i;j--){
if(a[j]<a[j-1]){
    swap(a[j],a[j-1]);
}
}
   }
}
int main (){
int a[100];
int n;
GetInput(a,n);
BubbleSort(a,n);
PrintResult(a,n);
    return 0;
}