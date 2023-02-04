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
}
void selectionsort(int *a,int n){
    for(int i =0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a[min],a[i]);
    }
}
void bubblesort(int*a,int n){
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
            }
        }
    }
}
void insertionsort(int *a,int n){
    for(int i =1;i<=n-1;i++){
        int key = a[i];
        int j =i;
        while(j>0 && key<a[j-1]){
            a[j]=a[j-1];
            j-=1;
        }
        a[j]=key;

    }
}
void merge(int*a,int l,int r,int mid){
    int n= (mid-l+1);
    int m = r-mid;
    int left[n];
    int right[m];
    for(int i = 0;i<n;i++){
        left[i] = a[l+i];
    }
    for(int j = 0;j<m;j++){
        right[j]=a[mid+1+j];
    }
    int i = 0;
    int j =0;
    int k =l;
    while(i<n &&j<m){
        if(left[i]<=right[j]){
            a[k] = left[i];
            i++;
            k++;
        }
        else{
            a[k]= right[j];
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
void heapify(int *a,int i,int n){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(a[left]>a[largest] && left<n){
        largest = left;
    }
    if(a[largest]<a[right] && right<n){
        largest = right;
    }
    if(i!=largest){
        swap(a[largest],a[i]);
        heapify(a,largest,n);
    }
}
void heapsort(int*a,int n){
    for(int i = n/2-1;i>=0;i--){
        heapify(a,i,n);
    }
    for(int i =n-1;i>=0;i--){
        // dua gia tri lon nhat ve cuoi heap
        swap(a[0],a[i]);
        // cap nhat lai max heap
        heapify(a,0,i);
    }
}
void mergesort(int*a,int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r,mid);
    }
}
void quicksort(int *a,int left,int right){
    // int m = (left+right)/2;
    int m = right;
    int pivot = a[m];
    int l = left;
    int r= right;
    do {
        while(a[l]<pivot){
            l++;
        }
        while(a[r]>pivot){
            r--;
        }
        if(l<=r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    } while(l<=r);
    if(left<r){
        quicksort(a,left,r);
    }
    if(l<right){
        quicksort(a,l,right);
    }
}
int main (){
    int n;
    cin>>n;
    int*a = new int[n];
    init(a,n);
    quicksort(a,0,n-1);
    show(a,n);
    delete a;
    return 0;
}