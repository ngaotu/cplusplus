#include <bits/stdc++.h>
using namespace std;
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
//  tim phan tu nho nhat va dua no ve dau
void SelectionSort(int *a,int n){
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(a[j]<a[i]){
                min = j;
            }
        }
        swap(a[min],a[i]);
    }
}
//  bubble sort : tim rphan tu lon nhat roi noi bot xuong cuoi
void BubbleSort(int *a,int n){
    for(int i =0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
            }
        }
    }
}
void InsectionSort(int *a,int n){
    int key,j;
    for(int i =1;i<n;i++){
        key = a[i];
        j =i;
        while(j>0&&key<a[j-1]){
            a[j] = a[j-1];
            j-=1;
        }
        a[j] =key;
    }
}

int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int *a =  new int[n];
    init(a,n);
    InsectionSort(a,n);
    show(a,n);
    return 0;
}