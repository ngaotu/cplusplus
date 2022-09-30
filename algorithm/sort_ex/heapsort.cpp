#include <bits/stdc++.h>
using namespace std;
// cay nhi phan :
// cach chuyen tu 1 mang sang 1 cay nhi phan : 1 node i bat ki se co node con ben trai la : 2i+1 va node con ben phai la 2i+2
// hep : la 1 cay nhi phan hoan chinh nhung co node cha lon hon 2 node con cua no ( MAX - HEAP ) , neu nguoc lai node cha nho hon ( MIN-HEAP)


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
// dua mang ve dang max-heap
void heapify(int * a,int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && a[largest]<a[left]){
        largest = left;
    }
      if(right<n && a[largest]<a[right]){
        largest = right;
    }
    if(largest!=i){
        swap(a[largest],a[i]);
        heapify(a,n,largest);
    }
}
void Heap(int *a,int n){
    for(int i =(n-2)/2;i>=0;i--){
        heapify(a,n,i);
    } 
    // dua phan tu lon nhat ve cuoi mang , giam so phan tu con phai kiem tra di 1
    // xay dung lai max heap cho mang 
    for (int i = n-1;i>=0;i--){
    swap(a[0],a[i]);
    heapify(a,i,0);
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    Heap(a,n);
    Show(a,n);


    return 0;
}