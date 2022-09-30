#include <iostream>
using namespace std;

void GetInput(int a[100],int n){
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}   
void GetOutput(int a[100],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void GetOutput(int a[100],int left,int right){
    for (int i=left;i<=right;i++){
        cout<<a[i]<<" ";
    }
}
void SelectionSort(int a[100],int n){
    for(int i=0;i<n-1;i++){
        int index = i;
        for(int j =i+1;j<n;j++){
            if(a[i]>a[j]){
                index=j;
            }
        }
        swap(a[i],a[index]);
    }
}
void InsertionSort(int a[100],int n){
    int key,j;
for(int i =1;i<n;i++){
key=a[i];
j=i;
 while(j>0 && a[j-1]>key){
    a[j]=a[j-1];
    j--;
 }
 a[j]=key;
cout<<"\nBuoc thu "<<i<<" :\n";
GetOutput(a,n);
}
}
void BubbleSort(int a[100],int n){
    for (int i =0; i<n-1;i++){
        for (int j =n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
        cout<<"\nBuoc thu "<<i+1<<" :\n";
        GetOutput(a,n);
    }
}
void QuickSort(int a[100],int n,int left,int right){
    
int dem = left-1;
 if(left>=right){
    return;
 }
 
  if(right-left==1){
    if(a[right]<a[left]){
        swap(a[right],a[left]);
    }
 }
 else {
  for(int i =left;i<right;i++){
   if(a[i]<=a[right]){
       dem++;
       swap(a[i],a[dem]);
   }
  }
 
//  sap xep pivot vao dung vi tri
 swap(a[dem+1],a[right]);

 }
cout<<"\nDay gom cac phan tu nho hon: ";
 GetOutput(a,left,dem);
 cout<<"\nDay gom cac phan tu lon hon: ";
 GetOutput(a,dem+2,right);
  cout<<"\nDay : ";
  GetOutput(a,n);
 QuickSort(a,n,left,dem);
 QuickSort(a,n,dem+2,right);
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
      while(j<n1){
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
void Arrange(int a[100],int n) {
     int dem =0;
     

         for(int j= 0;j<n;j++){
             if(a[j]%6==0){
                 swap(a[j],a[dem]);
                 dem++;
                
             }
         }
           
             for(int j =0;j<n;j++){
                   if(a[j]%3!=0){
                 swap(a[j],a[dem]);
                 dem++;
             }
             }
                GetOutput(a,n);
                 cout<<"\n";
 }
//  xoa  phan tu  co gia tri x trong mang 
 void DeleteElement(int a[100],int & n,int x){
     int index=-1;
      for(int i =0;i<n;i++){
          if(a[i]==x){
             index=i;
          }
      }
    //   if(index==-1){
    //       cout<<"\n Trong mang khong co gia tri "<<x<<".\n";
    //       return;
    //   }
     
    //   else {
          for(int i=index;i<n-1;i++){
              a[i]=a[i+1];
          }
          n--;
    //   }
 }
//  xoas cac phan tu chia het cho 5 co trong day
 void DeleteArray(int a[100],int & n){
     for(int i=0;i<=n-1;i++){
      

         if(a[i]%5==0){
             DeleteElement(a,n,a[i]);
            // giảm i để kiểm tra tại vị trí đó sau khi xóa 
           
                i--;
            
            
         }
         
     }

 }
 void InsertElement(int a[100], int &n,int &x){
     cout<<"\nInsert a Element: ";
     cin>>x;
     n++;
     a[n-1]=x;
     InsertionSort(a,n);
 }
 int BinarySearch(int a[100],int n,int x){
      int left =0; 
      int right = n-1;
      int mid;
      while(left<=right){
          mid = (right-left)/2;
          
          if(a[mid]<x){
              left=mid+1;
          }
          else if ( a[mid] >x){
              right = mid-1;
          }
          else {
              return mid;
          }
              
          
      }
      return -1;
 }
int main (){
int a[100];
int n,x;
cout<<"Nhap so phan tu: ";
cin>>n;
GetInput(a,n);
// BubbleSort(a,n);
// SelectionSort(a,n);
// QuickSort(a,n,0,n-1);
// Arrange(a,n);
// InsertionSort(a,n);
// InsertElement(a,n,x);
// cout<<"\nMang sau khi xoa la: \n";
// DeleteArray(a,n);
MergeSort(a,0,n-1);
GetOutput(a,n);
    return 0;
}