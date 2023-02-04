#include <bits/stdc++.h>
using namespace std;
// Tinh toan do phuc tap cua thuat toan: O(nlogn)   
// 
void init(int *a, int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void show(int *a,int n){
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void merge(int *a,int l, int r, int mid){
    int n = (mid - l+1);
    int m = r-mid;
    int left[n],right[m];
    int i,j,k;
    for(int i =0;i<n;i++){
        left[i] = a[l+i];
    }
    for(int j = 0;j<m;j++){
        right[j] = a[j+mid+1];
    }
    i = 0;
    j = 0;
    k = l;
    while(i<n&& j<m){
        if(left[i]<=right[j]){
            a[k] = left[i];
            i++;
            k++;
        }
        else {
            a[k] = right[j];
            j++;
            k++;
        }
    }
    while(i<n){
        a[k] = left[i];
        i++;
        k++;
    }
    while(j<m){
        a[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int *a,int l,int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,r);
        merge(a,l,r,mid);
    }
}
int main (){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int *a = new int [n];
    init(a,n);
    mergeSort(a,0,n-1);
    show(a,n);
    return 0;
}