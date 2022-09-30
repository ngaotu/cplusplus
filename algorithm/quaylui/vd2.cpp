#include <bits/stdc++.h>
using namespace std;
void kq(int a[],int k){
  
for(int i=1;i<=k;i++){
    cout<<a[i];
}
cout<<endl;

}

// thuat toán quay lui tim to hop chap k

void To_hop(int a[],int i,int n,int k){
    a[0]=0;
    for(int j=(a[i-1]+1);j<=(n-k+i);j++){
        
        a[i]=j;
        
    if(i==k){
        kq(a,k);
    } else {
        To_hop(a,i+1,n,k);
    }
}
}

int main (){
    // fstream file,out;
    // file.open("Tohop.text",ios::in);
int n;
 cout<<"Nhap n: ";
cin>>n;
int k;
 cout<<"Nhap k: ";
cin>>k;
int a[100];
To_hop(a,1,n,k);
// file.close();

    return 0;
}