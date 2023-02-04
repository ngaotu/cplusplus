#include <bits/stdc++.h>
using namespace std;
void Input(int * a ,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void Show(int * a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void merge(int  a[],int l,int mid,int r,int & count){
    int i,j,m,n,k;
    // so phan tu cua day con ben trai
    m = mid-l+1;
    // so phan tu cua day con ben phai
    n= r-mid;
    int b[m],c[n];
    for(i =0;i<m;i++){
        b[i]=a[l+i];
    }
    for(j =0;j<n;j++){
        c[j]=a[mid+j+1];
    }
    i=j=0;
    k=l;
    //  so sanh 2 phan tu cua 2 day con ( rồi gán thằng nhỏ hơn cho dãy trộn )
    while(i<m && j<n){
        if(b[i]<=c[j]){
            a[k] =b[i];
            i++;
            k++;
        }
        else {
            count=count+(m-i);
            a[k]=c[j];
            j++;
            k++;
        }
    }
    while(i<m){
        a[k]=b[i];
        i++;
        k++;
    }
     while(j<n){
        a[k]=c[j];
        j++;
        k++;
    }
}
void MergeSort(int a[],int l,int r,int & count,int n){
    if(l>=r){
        return;
    }
    int mid;
    mid = (l+r)/2;
    MergeSort(a,l,mid,count,n);
    MergeSort(a,mid+1,r,count,n);
    // tron 2 mang da sap xep de duoc mang can sap xep
    merge(a,l,mid,r,count);
    Show(a,n);
    cout<<endl;
    
    
}
int main (){
    int count =0;
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    MergeSort(a,0,n-1,count,n);
    // Show(a,n);
    cout<<"So cap nghich the la: "<<count;
    return 0;
}