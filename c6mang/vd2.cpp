#include <iostream>
#include <iomanip>
using namespace std;


void GetInput(float a[][30],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Nhap a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];

        }
    }
}
void GetOutput(float a[][30],int n){
    cout<<"Ma tran da cho: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<setw(6)<<a[i][j];

        }
        cout<<endl;
    }
}
void upper_Triangular(float a[][30],int n){
    cout<<"\nMa tran tam giac tren: \n";
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            
            if(j>=i){
                cout<<a[i][j]<<" ";
            }
            else {
                cout<<0<<" ";
            }

        }
        cout<<endl;
    }
}



void lower_Triangular(float a[][30],int n){
    cout<<"\nMa tran tam giac duoi: \n";
for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            
            if(j<=i){
                cout<<a[i][j]<<" ";
            }
            else {
                cout<<"0 ";
            }

        }
        cout<<endl;
    }
}

int main (){
    float a[30][30];
    int n;
    cout<<"Nhap so hang, so cot: ";
    cin>>n;
GetInput(a,n);
GetOutput(a,n);

lower_Triangular(a,n);
upper_Triangular(a,n);

    return 0;
}