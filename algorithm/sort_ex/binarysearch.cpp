#include <bits/stdc++.h>
using namespace std;

void Input ( int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void Show ( int *a,int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
bool ok = false;
void BinarySearch(int * a,int l, int r,int x,bool &ok){
    int mid = (l+r)/2;
    if(l>r){
        return;
    }
    if(a[mid]==x){
        ok = true;
        return;
    }
    else if (a[mid] <x){
        BinarySearch(a,l,mid-1,x,ok);
    }
    else {
        BinarySearch(a,mid+1,r,x,ok);
    }
}
bool cmp(int a,int b){
    return a>b;
}

int main (){
    int a[100];
    int n ;
    cout<<"Nhap n: ";
    cin>>n;
    Input(a,n);
    sort(a, a+n,cmp);
    Show(a,n);
    
    int x;
    cout<<"Nhap gia tri can tiem kiemL: ";
    cin>>x;
    BinarySearch(a,0,n-1,x,ok);
    if(!ok){
        cout<<"Khong tim thay x";
    }
    else {
        cout<<"Tim thay x";
    }
}