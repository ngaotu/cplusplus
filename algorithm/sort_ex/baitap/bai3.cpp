#include <bits/stdc++.h>
using namespace std;
void Input(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void Show(int *a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void ConvertToTail(int *a,int n,int &k){
    cout<<"Nhap so phan tu muon chuyen: ";
    cin>>k;
    if(k>n){
        k = n;
    }
    int *b = new int[n];
    for(int i =0;i<n;i++){
        if(i<k){
            b[n-i-1] = a[i]; 
        }
        // else {
        //     b[i] = a[i];
        // }
    }
    for(int i = 0;i<n-k;i++){
        b[i]=a[k+i];
    }
    for(int i =0;i<n;i++){
        a[i] = b[i];
    }
    // 1 2 3 4 5 6 => 3 4 5 6 1 2
    // for(int i =0;i<k;i++){
    //     swap(a[i],a[n-i-1]);
    // }
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int k;
    int * a = new int [n];
    Input(a,n);
    ConvertToTail(a,n,k);
    Show(a,n);
    return 0;
}