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
void merge(int *a,int l,int r,int mid){
    // n la so phan tu cua day ben trai
    int n = (mid-l)+1;
    int m = (r-mid);
    int i,j,k;
    int left[n];
    int right[m];
    for(int i =0;i<n;i++){
        left[i] = a[l+i]; 
    }
    for(int j = 0;j<m;j++){
        right[j] = a[mid+1+j];
    }
    i = 0;
    j = 0;
    k = l;
    while(i<n && j<m){
        if(abs(left[i])<=abs(right[j])){
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
        k++;
        i++;
    }
    while(j<m){
        a[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int *a,int l,int r,int n){
    if(l>=r){
        return;
    }
    int mid = (r+l)/2;
    mergeSort(a,l,mid,n);
    mergeSort(a,mid+1,r,n);
    merge(a,l,r,mid);
    Show(a,n);
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    mergeSort(a,0,n-1,n);
    Show(a,n);
    return 0;
}