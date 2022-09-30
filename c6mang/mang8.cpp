#include <iostream>
using namespace std;
void GetInputArray(int * a ,int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void arrangeIn(int* a,int n){
for(int i=0;i<n;i++){                    //duyet 2 vong lap de sap xep amng the thu tu tang dan
    for(int j=n;j>i;j--){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
    }
 
}
void arrangeW(int *a ,int n){
    for(int i=0;i<n/2;i++){                      // 
cout<<" "<<a[i]<<" "<<a[n-i-1];

    }
    if(n%2!=0){
        cout<<" "<<a[n/2];
    }
}
int main (){
int n;
cout<<"Elements of this array: \n";
cin>>n;
int * a= new int [n];
GetInputArray(a,n);
arrangeIn(a,n);
arrangeW(a,n);
    return 0;
}