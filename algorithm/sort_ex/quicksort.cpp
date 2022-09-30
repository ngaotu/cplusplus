#include <bits/stdc++.h>
using namespace std;
void Input(int * a,int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void Show(int *a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void QuickSort(int *a,int l,int r){
    if (l>=r){
        return;
    }
    else if(r-l==1){
        if(a[l]>a[r]){
            swap(a[l],a[r]);
        }
    }
    else {
        int count =-1;
        for(int i =l;i<r;i++){
            if(a[i]<a[r]){
                count++;
                swap(a[count],a[i]);
            }
        }
        swap(a[r],a[count+1]);
        QuickSort(a,l,count);
        QuickSort(a,count+2,r);
    }

}

int main (){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    QuickSort(a,0,n-1);
    Show(a,n);

    return 0;
}