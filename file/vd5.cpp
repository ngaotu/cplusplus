#include <bits/stdc++.h>
using namespace std;

void GetInput(int **a,int m,int n){
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
}
void GetOutput(int **a,int m,int n){
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void WriteFile(fstream & file,int **a,int m, int n){
    file.open("ketqua5.txt",ios::out);
     for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
           file<<" "<<a[i][j];
        }
        file<<endl;
    }
    file.close();
}
void ReadFile(fstream & file, fstream & fileOut,int n){
    int num;
    file.open("ketqua5.txt",ios::in);
    fileOut.open("hangdau.txt",ios::out);
    //   for(int i=0;i<m;i++){
      for(int j =0;j<n;j++){
          file>>num;
          fileOut<<" "<<num;
      }
    //     fileOut<<"\n";
    //   }
  file.close();
  fileOut.close();
}
void Delete(int** a,int m){
 for(int i=0;i<m;i++){
     delete[] a[i];
 }
 delete[] a;
}

int main (){
    fstream file,fileOut;
    int n,m;
    cout<<"Nhap so hang (m): ";
    cin>>m;
    cout<<"Nhap so cot cua mang (n): ";
    cin>>n;
// cap phat 1 mang con tro
 int **a = new int*[m];
 for(int i =0;i<m;i++){
  a[i]= new int [n];
 }
 GetInput(a,m,n);
 WriteFile(file,a,m,n);
 ReadFile(file,fileOut,n);
 Delete(a,m);
 return 0;
}