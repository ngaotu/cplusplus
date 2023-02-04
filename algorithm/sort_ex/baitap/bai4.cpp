#include <bits/stdc++.h>
using namespace std;

void Input(int *a,int n){
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
}
void Show(int *a,int n){
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
bool isPrime(int num){
    if(num<2){
        return false;
    }
    else if(num==2){
        return true;
    }
    else{
        for(int i =2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
    }
    return true;
}
// bool cmp(int a,int b){
//     if(isPrime(a) && isPrime(b)){
//         return a<b;
//     }
// }
void ArrangePrimeNum(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(isPrime(a[j]) && isPrime(a[j+1])){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
        }
    }
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int * a = new int [n];
    Input(a,n);
    ArrangePrimeNum(a,n);
    Show(a,n);
    return 0;
}