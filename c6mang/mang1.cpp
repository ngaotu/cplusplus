#include <iostream>
#define Max 20
using namespace std;
int main (){
    int n;
    cout<<"Nhap n: \n";
    cin>>n;
    int array[Max];
    int x;
    cout<<"nhap x: \n";
cin>>x;
for(int i = 0;i<n;i++){
    cout<<"Nhap array["<<i<<"]= ";
    cin>>array[i];
}
for(int i = 0;i<n;i++){
    
    cout<<array[i]<<" ";
}
int dem=0;
for(int i=0;i<n;i++){
    if(array[i]==x){
        dem++;
    }
}
if(dem==0){
    cout<<"\nkhong tim thay gia tri x";
}
if(dem>0){
    cout<<endl;
    cout<<x<<" xuat hien "<<dem<<"lan "<<endl;
}
system("pause");
return 0;
}