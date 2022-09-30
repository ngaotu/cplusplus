#include <bits/stdc++.h>
using namespace std;
 void GetInput(int * a, int n){
     for(int i =0;i<n;i++){
         cout<<"a["<<i<<"]= ";
         cin>>a[i];
     }
 }
 void GetOutput(int *a,int n){
     for(int i =0;i<n;i++){
         cout<<a[i]<<" ";
     }
 }
 
 void InsertionSort(int *a,int n){
   int key, j;
   for(int i =1;i<n;i++){
       key=a[i];
       j=i;
       while(key<a[j-1]&&j>0){
           a[j]=a[j-1];
           j--;
       }
       a[j]=key;
   }
 }
 void QuickSort(int * a, int left, int right){
     int count =left-1;
     if(left>=right){
         return;
     }
     else if(left ==right-1){
         if(a[left]>a[right]){
             swap(a[left],a[right]);
         }
     }
     else {
         for(int i =left;i<right;i++){
             if(a[i]<a[right]){
                 count++;
                 swap(a[count],a[i]);
             }
             
         }
         swap(a[count+1],a[right]);
         QuickSort(a,left,count-1);
         QuickSort(a,count+2,right);
     }
 }
 void SelectionSort(int *a,int n){
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

 string chuanHoa( string & str){
   str=" "+str;
    int length =str.length()-1;
     for(int i =0;i<str.length();i++){
         str[i]=tolower(str[i]);
     }
     for(int i = 1;i<str.length();i++){
         if(str[i-1]==' '&& str[i]!=' '){
             str[i]=toupper(str[i]);
         }

     }
for(int i = 0;i<str.length()-1;i++){
    if(str[0]==' '){
    //  xoa tu vi tri dau tien di 1 phan tu
    str.erase(0,1);
    i--;
}
else
if(str[length]==' '){
    //  xoa tu vi tri dau tien di 1 phan tu
    str.erase(length,1);
    i--;
}
else
     if(str[i]==' ' && str[i+1]==' '){
         str.erase(i,1);
         i--;
     }
     }
    
return str;
 }

int main (){
    int n;
    cout<<"NHap n: ";
    cin>>n;
    int x,locate;
    int * a = new int [n];
    GetInput(a,n);
    
    GetOutput(a,n);
    delete[] a; 
    return 0;
}