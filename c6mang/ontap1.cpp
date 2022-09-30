#include <iostream>
using namespace std;

void GetInput(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void GetOutput(int a[],int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



// quick sort
void Quicksort(int a[],int left,int right){
   int dem= left-1;
   if(left>=right){
       return;
   }
   else if(right-1==left){
       if(a[right]<a[left]){
           swap(a[right],a[left]);
       }

   }
   else {

   for(int i =left;i<right;i++){
       if(a[i]<a[right]){
           dem++;
           swap(a[i],a[dem]);
       }
   }
   swap(a[dem+1],a[right]);
  
   }
   Quicksort(a,left,dem-1);
   Quicksort(a,dem+2,right);

}
void OddEven(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%6==0){
            swap(a[i],a[dem]);
            dem++;
        }
    }
    for(int i=dem;i<n;i++){
        if(a[i]%3!=0){
            swap(a[i],a[dem]);
            dem++;
        }
    }
}

void InsertionSort(int a[],int n){
    int key,j;
    for(int i=1;i<n;i++){
        key=a[i];
        j=i;
        while(a[j-1]>key&& j>0){
           a[j]=a[j-1];
           j--;
        }
        a[j]=key;

    }
}
void BubbleSort(int a[],int n){
    for(int i =0 ;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
            }
        }
    }
}
void DeleteElement(int a[],int & n,int number){
    int index =-1;
for(int i =0;i<n;i++){
    if(a[i]==number){
        index=i;
    }
}
    for(int i =index;i<n-1;i++){
        a[i]=a[i+1];

    }
    n--;
}
void DeleteMinusNumber(int a[],int & n){
    for(int i=0;i<n;i++){
        if(a[i]<0){
            DeleteElement(a,n,a[i]);
            i--;
        }
    }
}
int main (){
int a[100];
int n;
cout<<"Enter number: ";
cin>>n;
GetInput(a,n);
// Quicksort(a,0,n-1);
// OddEven(a,n);
BubbleSort(a,n);
// InsertionSort(a,n);
DeleteMinusNumber(a,n);
GetOutput(a,n);
    return 0;
}