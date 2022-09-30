#include <bits/stdc++.h>
using namespace std;
 
 void RowCol(int & m,int &n){
 cout<<"Nhap so hang: ";
 cin>>m;
 cout<<"Nhap so cot: ";
 cin>>n;
 }
void Create(int **a,int m,int n){
     a = new int*[m];
 for(int i=0;i<m;i++){
  a[i]= new int [n];
 }
}
void GetInput(int **a,int  m,int n){
 
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
void Delete(int** a,int m){
 for(int i=0;i<m;i++){
     delete[] a[i];
 }
 delete[] a;
}
void AddMatrix(int **a,int **b,int**sum,int m,int n){
    GetInput(a,m,n);
    GetInput(b,m,n);
    for(int i =0;i<m;i++){
    for(int j=0;j<n;j++){
      sum[i][j]=a[i][j]+b[i][j];
    }
    }
}
void Transpose(int ** a, int m,int n){
    for(int j =0;j<n;j++){
        for(int i =0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main (){
 int m,n;
 RowCol(m,n);
 int **a;
    a = new int*[m];
 for(int i=0;i<m;i++){
  a[i]= new int [n];
 }
 int **b;
    b = new int*[m];
 for(int i=0;i<m;i++){
  b[i]= new int [n];
 }
int **sum;
  sum = new int*[m];
 for(int i=0;i<m;i++){
  sum[i]= new int [n];
  }
  GetInput(a,m,n);
//  AddMatrix(a,b,sum,m,n);
 Transpose(a,m,n);

 Delete(a,m);
    return 0;
}