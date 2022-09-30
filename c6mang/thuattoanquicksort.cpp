#include <iostream>
#define Max 100
using namespace std;
void GetInputArray(int  a[Max] ,int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void GetOutputArray(int  a[Max] ,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void quicksort(int a[Max],int left,int right){


    int dem=left-1;
    if(left>=right){
        return; // cau lenh ket thuc ham
    }
    if(left+1==right){
        // day co 2 phan tu , sap xep day theo thu tu tang dan
        if(a[left]>a[right]){
            swap(a[left],a[right]);
        }
    } else {
      // day co 3 ptu tro len
// lay a[right]= pivot
    for(int i=left;i<right;i++){
        if(a[i]<=a[right]){
            dem++;
            swap(a[dem],a[i]);
    }

    } swap(a[dem+1],a[right]);  
        // sap xep pivot vao dung vi tri cua no
        quicksort(a,left,dem);
        quicksort(a,dem+2,right);
    }
}

int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
int a[Max];
GetInputArray(a,n);
// GetOutputArray(a,n);
quicksort(a,0,n-1);
GetOutputArray(a,n);
    return 0;
}