#include <iostream>
using namespace std;
#define Max 100
 int n1,m1,n2,m2,a[Max][Max],b[Max][Max],c[Max][Max];
void GetInput(int a[][Max],int n,int m){
cout<<"Import the number of rows: ";
cin>>n;
cout<<"Import the number of column: ";
cin>>m;
for ( int i=0;i<n;i++){
    for (int j=0;j<m;j++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i][j];
    }
}
}
void GetOutput(int a[][Max],int n,int m){
for ( int i=0;i<n;i++){
    for (int j=0;j<m;j++){

        cout<<a[i][j]<<" ";
    }
    cout<<"\n";
}
}
void Multiply_Of_Matrix(int a[][Max],int b[][Max]){
    if(m1==n2){
for ( int i=0;i<n1;i++){
    for (int j=0;j<m2;j++){
      c+=a[i][j]*
    }
    cout<<"\n";
}
    }
    else {
        cout<<"The matrix isn't invalid. Please enter rows and columns again!";
        return;
    }

}
int main (){
GetInput(a,n1,m1);
GetInput(b,n2,m2);
    return 0;
}