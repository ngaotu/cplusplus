#include <bits/stdc++.h>
using namespace std;// liet ke chinh hop Vd{ 1,2,3,4,5}
// tao chinh hop chap k dau tien  VD : {1,2,3}
void ktao(int a[],int& k){
    cout<<"\nNhap k: ";
    cin>>k;
    for (int i = 1; i <= k; i++)
    {
        a[i]=i;
    }
    
}
void chinhhop(int a[],int n,int k ,bool& ok){
     int i=k;
     while(i>0&&a[i]==n){
        i--;
          }
    //  if(i==n-1){
    //      ok==true;
    //  }
    //  if(a[i]>n){
    //     //  swap(a[i],a[i-1]);
    //      ok=true;
    //  }
    if(i==0){
        ok=true;
    }
    else {
        a[i]++;
    }
     
    
}


int main (){
int n;
int k;
int a[100];
bool ok=false;
cout<<"Nhap n: ";
cin>>n;
cout<<"tap hop={ ";
for(int i=1;i<=n;i++){
    cout<<i;
    if(i!=n){
        cout<<" , ";
    }
}
cout<<" }";

ktao(a,k);
while(ok==false){
for (int i = 1; i <=k; i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
    chinhhop(a,n,k,ok);

}
    return 0;
}