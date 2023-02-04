#include <bits/stdc++.h>
using namespace std;

void init(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void show(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int binarySearch(int *a,int l,int r,int x){
    if (l>r){
        return -1;
    }
    int mid = (l+r)/2;
    if(a[mid]>x){
         return binarySearch(a,l,mid-1,x);
    }
    else if(a[mid] <x){
        return binarySearch(a,mid+1,r,x);
    }
    else {
        return mid;
    }
}
int main (){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int * a = new int [n];
    init(a,n);
    cout<<"Tim thay o vi tri: "<<binarySearch(a,0,n-1,5);

    delete a;

}