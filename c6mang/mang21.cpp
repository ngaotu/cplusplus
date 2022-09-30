#include <iostream>
using namespace std;
void GetInput(int a[][5]){     // dua vao mang a la cac gia tri dien ap kiem tra cua 1 bo khuech dai
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<"Nhap a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
}
void GetOutput(int a[][5]){
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void Check_Value1(int a[][5],int left){
    cout<<"\nCac gia tri dien ap < "<<left<< " la: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            
            if(a[i][j]<left){
                cout<<a[i][j]<<"  ";
            }
        }
    }
}
void Check_Value2(int a[][5],int left){
    cout<<"\nCac gia tri dien ap > "<<left<< " la: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            
            if(a[i][j]>=left){
                cout<<a[i][j]<<"  ";
            }
        }
    }
}
void Check_Value(int a[][5],int left,int right){
    cout<<"\nCac gia tri dien ap "<<left<<"-"<<right<<" la: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            
            if(a[i][j]>=left&&a[i][j]<right){
                cout<<a[i][j]<<"  ";
            }
        }
    }
}
void Output(int a[][5]){
    Check_Value1(a,60);
    Check_Value(a,60,70);
    Check_Value(a,70,80);
    Check_Value(a,80,90);
  Check_Value2(a,90);
}

int main (){
int a[3][5];
GetInput(a);
GetOutput(a);
Output(a);

    return 0;
}