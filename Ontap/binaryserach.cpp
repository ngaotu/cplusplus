#include <bits/stdc++.h>
using namespace std;

void init(int*a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void show(int *a, int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int binarySeach(int *a,int l,int r,int x){
    if(l>r){
        return -1;
    }
    
    int mid = (l+r)/2;
    if(a[mid]==x){
        return mid;
    } 
    else if(a[mid]>x){
       return binarySeach(a,l,mid-1,x);
    }
    else{
       return binarySeach(a,mid+1,r,x);
    }
}
int main (){
    int n;
    cout<<"Input n: ";
    cin>>n;
    int * a = new int [n];
    init(a,n);
    cout<<"Tim thay x o vi tri "<<binarySeach(a,0,n-1,5);
    show(a,n);
    delete[] a;
    return 0;
}