#include <bits/stdc++.h>
using namespace std;
bool ok=false;
// xep n quan hau vao ban co kich thuoc n*n ( khong co quan hau nao an duoc nhau)
void kq(int a[],int n){
  
for(int i=1;i<=n;i++){
    cout<<"("<<i<<" , "<<a[i] <<" )";
}
cout<<endl;

}
void queen(int a[],int n,int i,int checkcot[], int duongcheo_DBTN[],int duongcheo_TBDN[],int &arange){
//tat ca kha nang quan hau co the the co
for (int j=1;j<=n;j++){
    if((checkcot[j]==0)&&(duongcheo_DBTN[i+j-1]==0)&&(duongcheo_TBDN[i-j+n]==0)){
        a[i]=j;
checkcot[j]=1;
duongcheo_DBTN[i+j-1]=1;
duongcheo_TBDN[i-j+n]=1;

 if(i==n){
    arange++;
    ok=true;// co the xep duoc duoc n quan hau vao 
     kq(a,n);
 } else {
queen(a,n,i+1,checkcot,duongcheo_DBTN,duongcheo_TBDN,arange);
 }

 // backtrack(quay lui)
 checkcot[j]=0;
duongcheo_DBTN[i+j-1]=0;
duongcheo_TBDN[i-j+n]=0;



    }
}
}

int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
int a[100];
// khai bao mang danh dau
// danh dau cac cot da co quan hau
int checkcot[100];
// danh dau duong cheo dong bac tay nam bi quan hau khong che
int duongcheo_TBDN[100];

// danh dau duong cheo tay bac dong nam bi quan hau khong che
int duongcheo_DBTN[100];
for(int j=1;j<=100;j++){
    duongcheo_DBTN[j]=0;
     duongcheo_TBDN[j]=0;
      checkcot[j]=0;
}
int arange=0;// so cach xep 
queen(a,n,1,checkcot,duongcheo_DBTN,duongcheo_TBDN,arange);
if(ok==false){
    cout<<"Khong the xep  nhu vay ";
} else {
cout<<"So cac sap xep la: "<<arange<<endl;
}
    return 0;
}