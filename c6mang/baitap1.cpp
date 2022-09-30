#include <iostream>
using namespace std;
#define Max 100
float a[Max][Max];
int n,m;

void GetInput(){
    cout<<"Nhap so hang: ";
    cin>>n;
    cout<<"Nhap so cot: ";
    cin>>m;
    for(int i =0;i<n;i++){
        for ( int j=0;j<m;j++){
cout<<"a["<<i<<"]["<<j<<"]= ";
cin>>a[i][j];

        }
    }
}
void GetOutput(){
    for(int i =0;i<n;i++){
        for ( int j=0;j<m;j++){

cout<<a[i][j]<<"  ";

        }
        cout<<"\n";
    }
}
int main (){
GetInput();
GetOutput();

    return 0;
}