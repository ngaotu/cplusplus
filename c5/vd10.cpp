#include <iostream>
using namespace std;
#define Max 20
float payMoney(float number){
 float totalMoney=0;
   if(number<250){
    totalMoney=2000*number;
    }
   else if (250<=number && number <400){
    totalMoney=2000*250+3000*(number-250);
    }
   else if (400<=number && number <500){
    totalMoney=2000*250+3000*150+(number-400)*4000;
    }
   else {
    totalMoney=2000*250+3000*150+100*4000+(number-500)*5000;
    }
  return totalMoney;
}
void Getinput(float a[Max],int n){
   for(int i=0;i<n;i++){
    cout<<"So dien su dung cua ho gia dinh thu "<<i+1<<": ";
    cin>>a[i];
    }
}
float Showresult(float a[Max],int n){
    float min =a[0];
for(int i=1;i<n;i++){
   if(min>a[i]){
       min=a[i];
   }
}
return payMoney(min);
}
int main (){
int n;
float a[Max];
cout<<"Nhap so ho gia dinh: ";
cin>>n;
Getinput(a,n);
cout<<"So tien dien it nhat trong cac ho la: "<<Showresult(a,n)<<"\n";
}