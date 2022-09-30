#include <bits/stdc++.h>
using namespace std;

void GetInput(int * a, int n){
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void GetOutput(int * a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
bool SquareNum(int num){
   int tmp = sqrt(num);
   return tmp*tmp==num;
 }
 void WriteFile(fstream & file ,int *a,int n){
     file.open("Dayso.txt",ios::out);
     for(int i=0;i<n;i++){
       file<<" "<<a[i];
     }
     file.close();
 }
 void ReadFile(fstream & file, fstream & fileOut){
   file.open("Dayso.txt",ios::in);
   fileOut.open("sochinhphuong.txt",ios::out);
   int num;
   while(!file.eof()){
       file>>num;
       if(SquareNum(num)==true){
           fileOut<<" "<<num;
       }
   }
   file.close();
   fileOut.close();
 }
int main (){
 int n;                                                              
 fstream file,fileOut;
 cout<<"Nhap n: ";
 cin>>n;
 int * a = new int[n];
  GetInput(a,n);
  WriteFile(file,a,n);
  ReadFile(file,fileOut);
 delete[] a;
 return 0;
 }