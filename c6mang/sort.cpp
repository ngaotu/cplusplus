#include <bits/stdc++.h>
using namespace std;

void Show(int * a,int n){
    for(int i =0;i<n;i++){
      cout<<a[i]<<" ";
    }
}
void BubbleSort(int *a,int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
            }
        }
        Show(a,n);
    }
}
int BinarySearch(int * a,int  l,int r,int x,int &count){
    if(r>=l){
    int mid = (r-l)/2+l;
    if(a[mid]<x){
       return  BinarySearch(a,mid+1,r,x,count);
    }
    else if (a[mid]>x){
       return  BinarySearch(a,l,mid-1,x,count);
       
    }
    else {
        if(count<mid){
            count = mid;
        } 
       BinarySearch(a,mid+1,r,x,count);
    }
    }
    return count;
    
}
// vd7
// vd8
void Count(int * a,int n){
    int count =0;
    sort(a,a+n);
    for(int i =0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        
    }
    cout<<"so cap: "<<count;
}

bool oddeven(int  a,int  b){
    if(a%2!=0 && b%2 ==0){
       
        return true;
    }
    return false;
}
bool absSort(int a,int b){
    return abs(a)>abs(b);
}
int main (){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
int * a = new int (n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    // sort(a,a+n);
    // Show(a,n);
    // sap xep vector
    // vector <int> v ={2,10,4,-1,3,0};
    // sort(v.begin(),v.end());
    // for(int i = 0;i<6;i++){
    //     cout<<v.at(i)<<"  ";
    // }
    //  sap xep mang theo thu tu giam dan: 
    // sort(a,a+n,greater<int>());
    // Show(a,n);
    //  sap xep mang string
    // string b[n];
    // for(int i =0;i<n;i++){
    //     cin>>b[i];
    // }
    // sort(b,b+n);
    // for(int i=0;i<n;i++){
    //     cout<<b[i]<<" ";
    // }

    // xây dựng comparator cho hàm sort khi muon sap xep theo y tuong cua nguoi lap trinh

    // sort(a,a+n,oddeven);
    // Show(a,n);
    // stable_sort(a,a+n,absSort);
    // Show(a,n);
    // BubbleSort(a,n);
    int x;
    cin>>x;
    // int count =-1;
    // cout<<BinarySearch(a,0,n-1,x,count);
    Count(a,n);
    delete[] a;
            return 0;
}