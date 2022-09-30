#include <bits/stdc++.h>
using namespace std;
void Input(int *a ,int n){
    a[0]=1;
    for(int i =1;i<n;i++){
        if(i%3==1){
            a[i]=a[i-1]*2;
        }
        else if (i%3==2){
            a[i]=a[i-1]*2-1;
        }
        else {
            a[i]=a[i-1]*2+1;
        }
    }
}
void show(int *a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    Input(a,n);
    show(a,n);
}