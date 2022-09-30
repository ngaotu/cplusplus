#include <bits/stdc++.h>
using namespace std;
 bool Prime(int so){
     if(so<=1){
         return false;
     }
     for(int i =2;i<=sqrt(so);i++){
         if(so%i==0){
             return false;
         }
     }
     return true;
 }
void GetFile(fstream & file){
    int so;
  file.open("ketqua4.txt",ios::out);
  do{
       cout<<"Nhap so: ";
       cin>>so;
       if(so!=0){
           file<<" "<<so;
       }
  } while(so!=0);
   file.close();
 }
 void ReadFile(fstream  & fileIn){
    fileIn.open("ketqua4.txt",ios::in);
    int x;
    int sum=0;
    while(!fileIn.eof()){    
        fileIn>>x;
        cout<<x<<" ";
        if(Prime(x)==true){
            sum+=x;  
        }
    }
    cout<<"\nTong cac so nguyen to trong file: "<<sum;
    fileIn.close();
 }
int main (){
 fstream file;
 GetFile(file);
 ReadFile(file);
}