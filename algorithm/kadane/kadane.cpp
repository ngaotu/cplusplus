#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for (int i = a; i <= b; i++)
int Max(int a,int b){
   if(a>b){
       return a;
   }
   else {
       return b;
   }
}
// duyet hai vong for trau =>   do phuc tap cua thuat toan la On^2
void MaxSubarray(int * a,int n){
    int best =0;
    for(int i=0;i<n;i++){
       int sum=0;
        for(int j= i;j<n;j++){
            // sum +=a[j];
            // best=Max(best,sum);
            cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Maximum Subarray sum: "<<best;
}
// giai thuat kadane do p[huc tap cua thuat toan la 0n
void MaxSubarray2(int * a, int n){
    int best =0;
    int sum =0;
    for(int i=0;i<n;i++){ 
        sum = Max(sum+a[i],a[i]);
        best = Max(sum,best);
    }
    cout<<"Maximum Subarray Sum: "<<best;
}

 int main (){
   
    int n;
    int * a = new int (n);
    cout<<"Input n: \n";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    MaxSubarray2( a, n);
    delete[] a;
     return 0;
 }