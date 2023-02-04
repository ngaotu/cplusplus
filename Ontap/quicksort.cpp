#include <bits/stdc++.h>
using namespace std;

void init(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void show(int*a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void quicksort(int *a,int l ,int r,int n){
    int mid = (l+r)/2;
    int i = l;
    int j = r;
    int pivot = a[mid];
    do {
        while(a[i]<pivot){
            i++;
        }
        while(a[j]>pivot){
            j--;
        }
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    show(a,n);
    if (j>l)quicksort(a,l,j,n);
    if (i<r) quicksort(a,i,r,n);
}

int main (){
    int n;
    cin>>n;
    int * a = new int [n];
    init(a,n);
    quicksort(a,0,n-1,n);
    show(a,n);
    delete a;
    return 0;
}