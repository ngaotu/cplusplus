#include <bits/stdc++.h>
using namespace std;
// liet ke cac hoan vi hoan toan (Xi != i ) cua tap {1,2,...,n}
int n;
int a[100];
int ok[100]={0};
 
 void PrintResult(){
     for(int i=1;i<=n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }
void hoanvi(int i){
for(int j=1;j<=n;j++){
    if((ok[j]==0)&&(j!=i)){
        a[i]=j;
        ok[j]=1; // danh dau so da chon
if(i==n){
    PrintResult();
}
else {
    hoanvi(i+1);
}
// backtrack
ok[j]=0;


    }
}

}
int main (){
cout<<"Nhap n: ";
cin>>n;
cout<<"Tap hop ={ ";
for(int i=1;i<=n;i++){
    cout<<i;
    if(i!=n){
        cout<<" , ";
    }

}
cout<<" }\n";
cout<<"Cac hoan vi hoan toan la: \n";
hoanvi(1);

    return 0;

}