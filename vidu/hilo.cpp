#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//de bai: tro chs hi-lo
int main(){
     int Max_int ;
     cout<<"Nhap gioi han: ";
     cin>> Max_int;
int n;
srand(time(NULL));
n=rand()%(Max_int)+1;
int so;
int solan=1;
do{
cout<<"So ban chon la: ";
cin>>so;
if(so<n){
    cout<<"\nSo be hon so phai tim! ";
    solan++;
}
if(so>n){
    cout<<"\nSo lon hon so phai tim! ";
    solan++;
}
if(so==n){
    cout<<"Ban doan dung roi!";
    cout<<"\nSo lan da doan la: "<<solan;
}
}
 while(so!=n);
    return 0;
}