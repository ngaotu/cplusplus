#include <bits/stdc++.h>
using namespace std;
// heap sort  . Xay dung (heapify) max-heap bang mang 
void init(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void show(int *a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void heapify(int *a,int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i +2;
    if(left <n && a[largest]<a[left]){
        largest = left;
    }
    if(right<n && a[largest]<a[right]){
        largest = right;
    }
    //  neu node cha khong phai node lon nhat thi
    // dua node cha la node lon nhat . tiep tuc xet cay con co node cha o vi tri largest
    if(largest!=i){
    swap(a[largest],a[i]);
    heapify(a,n,largest);
    }
}
void HeapSort(int*a,int n){
    // dua ve cay max heap
    for(int i = n/2-1;i>=0;i--){
        heapify(a,n,i);
    }
    //  dua node cha lon nhat ve node cuoi cung , thiet lap lai max heap cho phan cay chua duoc sap xep roi lam tuong tu
    for(int i =n-1;i>=0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }
}
int main (){
    int n;
    cout<<"Input number of array: ";
    cin>>n;
    int *a = new int[n];
    init(a,n);
    HeapSort(a,n);
    show(a,n);

    delete [] a;
    return 0;
}