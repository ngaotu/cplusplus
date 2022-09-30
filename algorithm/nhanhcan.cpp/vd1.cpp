#include <bits/stdc++.h>
using namespace std;
#define max 20
#define infinite 1
int n;

int BestChoice;
int sum[100];
int X[100];
void PrintResult(int k,int a[]){
for(int i=1;i<=k;i++){
    cout<<a[i];
    if(i!=k){
        cout<<" + ";
    }
}
cout<<endl;
}
void MaxMutilp(int i ,int& BestChoice,int a[]){ 
    for(int j=a[i-1];j<=(n-sum[i-1]);j++){
        a[i]=j;
sum[i]=sum[i-1]+j;
X[i]=X[i-1]*j;
 if(X[i]>BestChoice){
         BestChoice=X[i];
     }  
 MaxMutilp(i+1,BestChoice,a);
}

}


int main (){
int a[100];
cout<<"Nhap n: ";
cin>>n;
sum[0]=0;
a[0]=1;
X[0]=1;
BestChoice=1;
MaxMutilp(1,BestChoice,a);
cout<<"Max: "<<BestChoice;
    return 0;
}