/*
xay dung thuat toan tu cau hinh chua phai cau hinh cuoi
sinh ra duoc cau hinh ke tiep no
mo ta nhu sau ()
xet tu cuoi day ve dau day gap so 0 dau tien thi doi thanh so 1 ( cac so truoc no giu nguyen so sau no thay = so 0) vd(101 --> 110)
*/
//  chuong trinh sinh cac day nhi phan do dai n
#include <bits/stdc++.h>
#define MAX 30
using namespace std;
void ktao(int a[],int n){
    for(int i =1;i<=n;i++){
a[i]=0;
    }
}
void phuongphapsinh(int a[],int n,bool & ok){
    // bat dau tu bit cuoi cung va di tim bit 0 dau tien
    int i=n;

    // lap cho den khi het mang va bit do = 0
    while(i>=1&&a[i]==1){
a[i]=0;
i--;
    }
    // khi ma sinh den cau hinh cuoi cung(dang 11111...1) thi i=0
    if(i==0){
        ok=true;
    }
    else {
        a[i]=1;
    }
}

int main (){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int a[MAX];
    bool ok=false;
    ktao(a,n);
    while(ok==false){
        for(int i=1;i<=n;i++){
            cout<<a[i];
        }
        cout<<endl;
        phuongphapsinh(a,n,ok);

    }
    return 0;

}