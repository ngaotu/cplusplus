#include "thuvien.h"
// ham kiem tra so ngueyn to
bool kiemtra_snt(int so){
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
void thuasonguyento(int n){
    int i=2;
    int dem=0;
    cout<<n<<"= ";
    while(n!=1){
    if(n%i==0){
        if(kiemtra_snt(i)==true){
            cout<<i;
            n=n/i;
            dem++;
        }
        
    }
    else {
        if(n>i&&dem==1){
          cout<<"*";
        }
        if(dem>1){
            cout<<"^"<<dem;
        }
     dem=0;
        i++;
    }
}
}