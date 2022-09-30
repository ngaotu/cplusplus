#include <bits/stdc++.h>
using namespace std;

void ShowResutl(int *a,int n ){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
}
}
void Merge(int* a,int l,int m, int r){
    int i,j,k;
  int  n1=m-l+1;
   int  n2=r-m;
    int left[n1],right[n2] ;
      for(i=0;i<n1;i++){
           left[i]=a[i+l];
      }
      for(j=0;j<n2;j++){
          right[j]=a[m+1+j];
      }
      i=0;
      j=0;
      k=l;
    //     so sanh va them phan tu be hon vao MANG KET QUA
      while(i<n1&&j<n2){
       if(left[i]<=right[j]){
         a[k]=left[i];
         i++;
       }
       else {
           a[k]=right[j];
           j++;
       }
       k++;
      }
    //   them tat ca phan tu con lai cua mang ben trai vao MANG KET QUA
      while(i<n1){
          a[k]=left[i];
          i++;
          k++;
      }
    //   them tat ca phan tu con lai cua mang ben phai vao MANG KET QUA
      while(j<n2){
          a[k]=right[j];
          j++;
          k++;
      }

}
 void MergeSort(int * a,int l, int r){
    if(l==r){
        return;
    }
    else {
    int m = (l+r)/2;
     MergeSort(a,l,m);
     MergeSort(a,m+1,r);
     Merge(a,l,m,r);
    }
    
}
/* l là chỉ số trái và r là chỉ số phải của mảng cần được sắp xếp */

int main (){
    int a[100];
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    MergeSort(a,0,n-1);
    ShowResutl(a,n);
    return 0;
}