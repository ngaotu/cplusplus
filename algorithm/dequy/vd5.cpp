#include <bits/stdc++.h>
using namespace std;
int computeCombination(int n,int k){
    if(k==0||k==n){
        return 1;
    }
    return computeCombination(n-1,k-1)+computeCombination(n-1,k);
}
int main (){
int n,k;
do{
cout<<"Enter number(Ck_n) : ";
cin>>n>>k;
if(k>n){
    cout<<"Invalid value! Please trying enter number";
}
} while( k>n);
cout<<"k-combination of n elements: "<<computeCombination(n,k);
    return 0;
}