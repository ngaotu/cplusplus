#include <iostream>
#include <cmath>
#define Max 50
using namespace std;
void GetInputArray(int  a[Max] ,int n){      // nhap mang can thuc hien
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
bool prime_check(int so){        // kiem tra mot so xem phai la so nguyen to khong
    if(so<=1){
        return false;
    }
    for(int i=2;i<=sqrt(so);i++){
        if(so%i==0){
            return false;
        }
    }
    return true;
} 
void Prime(int a[Max],int n){
    cout<<"Prime_Number: ";
for(int i=0;i<n;i++){                             // liet ke cac so nguyen to co trong mang
    if(prime_check(a[i])==true){
        cout<<a[i]<<" ";
    }
}

}
bool Square_Number(int so){
if(so<=0){
    return false ;
}
int x;
x=sqrt(so);
if(x*x!=so){
    return false;
}
return true;
}
void SquareArray(int a[Max],int n){
    cout<<"Square_Number: ";
    for(int i=0;i<n;i++){
        if(Square_Number(a[i])==true){                                
            cout<<a[i]<<" ";
        }
    }
}
// in len man hinh cac bo 3 so co tong lon hon 100
void Add_Threenumber(int a[Max],int n){
    cout<<"\nADD>100: ";
    for(int i=0;i<n;i++){                    // chay 3 vong lap 
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(((a[i]!=a[k])&&(a[i]!=a[j])&&(a[j]!=a[k]))&&(a[i]+a[j]+a[k]>100)){
                    cout<<"\n"<<a[i]<<" "<<a[j]<<" "<<a[k];
                }
            }
        }
    }
}
void arrangeIn(int a[Max],int n){
    cout<<"\nArrange_AbsNumber: ";
    for(int i=0;i<n;i++){
        a[i]=abs(a[i]);
    }
for(int i=0;i<n;i++){                    //duyet 2 vong lap de sap xep amng the thu tu tang dan
    for(int j=n;j>i;j--){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main (){
int n;
cout<<"Elements of this array: \n";
cin>>n;
int a[Max];
GetInputArray(a,n);
Prime(a,n);
cout<<endl;
SquareArray(a,n);
Add_Threenumber(a,n);
arrangeIn(a,n);
    return 0;
}