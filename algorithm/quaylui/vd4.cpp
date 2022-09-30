#include <bits/stdc++.h>
using namespace std;
// cho so nguyen duong n <=30 tim cac cach phan tich so n thanh tong cac so nguyen duong khac 
// chua xong
int n;
int sum[100];
int a[100];
void ShowResult(int k){
    cout<<n<<" = ";
    for(int i=1;i<=k;i++){
        
        cout<<a[i];
        if(i!=k){
            cout<<" + ";
        }
        
    }
    cout<<endl;
}

void SumOfpossitiveIn(int i,int &count){
    
for(int j=a[i-1];j<=(n-sum[i-1])/2;j++){
    
a[i]=j;
sum[i]=sum[i-1]+j;
SumOfpossitiveIn(i+1,count);
  
}
// 
if
(a[i]=n-sum[i-1])
count++;

    ShowResult(i);
}


int main (){
    int count=0;
cout<<"Enter number: ";
cin>>n;
a[0]=1;
    sum[0]=0;
SumOfpossitiveIn(1,count);
cout<<"Count: "<<count;
    return 0;
}