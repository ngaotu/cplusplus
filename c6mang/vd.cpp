#include <iostream>
#include <iomanip>
using namespace std;
int a[20][20],m,n;

void GetInput(){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Nhap a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];

        }
    }
}
void GetOutput(){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            
            cout<<setw(8)<<a[i][j];

        }
        cout<<endl;
    }
}
int main (){
    cout<<"Nhap so hang, so cot: ";
    cin>>m>>n;
GetInput();
GetOutput();
    return 0;
}