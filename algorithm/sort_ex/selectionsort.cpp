#include <bits/stdc++.h>
using namespace std;

void Input(int * a ,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void Show(int * a ,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void SelectionSort(int * a,int n){
    int min;
    for (int i=0;i<n-1;i++){
        min =i;
        for ( int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a[min],a[i]);
        Show(a,n);
        cout<<endl;
    }
}
void BubbleSort(int * a,int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void InsertionSort(int*a ,int n){
    int key,j;
    for (int i=1;i<n;i++){
        j=i;
        key = a[i];
        while(j>0 && key<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        
        a[j]=key;

    }
}

int main (){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    // SelectionSort(a,n);
    InsertionSort(a,n);
    Show(a,n);
    return 0;
}