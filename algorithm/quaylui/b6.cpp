#include <bits/stdc++.h>
using namespace std;
bool ok[100]={0};
int a[100];
int b[100];
int n,k;
int t;
// liet ke cac tap con co max-min<=T cua tap s gom n so nguyen s1,s2,...sn
void kq(int a[],int k){
  
for(int i=1;i<=k;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}

void tapcon(int i,int k,int b[],int &count){
    a[0]=0;
    sort(b,b+n);
   for(int j=1;j<=n;j++){
       // cac kha nnag ma a[i] co the nhan 
       if(ok[b[j]]==0&&b[j]>a[i-1]){
       a[i]=b[j];
   ok[b[j]]=1;
   if(i==k&&(a[k]-a[1])<=t){
       count++;
       kq(a,k);
   }
   else {
       tapcon(i+1,k,b,count);
   }
//backtrack
ok[b[j]]=0;

   }
   }
}
int main (){
    int count=1; // so tap con luon >=1 ( tap rong)
cout<<"Nhap n: ";
cin>>n;
cout<<"Max-Min <=: ";
cin>>t;
cout<<"Nhap tap hop:\n";
for(int i=1;i<=n;i++){
    cout<<"b["<<i<<"]= ";
    cin>>b[i];
}
cout<<"Cac tap con la: ";
for(int i=1;i<=n;i++){
 tapcon(1,i,b,count);
}
cout<<"So tap con la: "<<count;

    return 0;
}