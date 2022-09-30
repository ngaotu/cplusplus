#include <bits/stdc++.h>
using namespace std;
bool Check_Prime(int so){
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
void Prime_factor(int & n){
cout<<"Nhap n: ";
cin>>n;
if(n>=2){

int i=2;
int dem=0;
cout<<n<<" = ";
while(n!=1){
    if( Check_Prime(i)==true && n%i==0 ){

        dem++;
        // if(n!=i){
        //     cout<<" * ";
        // }
        n=n/i;
        if(n%i!=0){
            cout<<i;
            if(dem>1){
               cout<< " ^ "<<dem;
            }
            if(n!=1){
                cout<<" * ";
            }
        }
        
    }

    else {
       
        dem=0;
        i++;
    }
}
}
else {
    cout<<"Khong phan tich duoc "<<n<<" thanh cac thua so nguyen to";
}
}

int main (){
int n;
Prime_factor(n);
    return 0;
}