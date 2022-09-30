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
 void BubbleSort(int *a,int n){
    for(int i = 0;i<n-1;i++){
        for(int j =0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
 }
int main (){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    BubbleSort(a,n);
    Show(a,n);
    return 0;
}