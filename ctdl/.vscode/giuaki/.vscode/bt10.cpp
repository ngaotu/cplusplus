#include <bits/stdc++.h>
using namespace std;
#define MAX 100

void GetInput(float arr[][MAX],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"arr["<<i<<"]["<<j<<"]= ";
            cin>>arr[i][j];
        }
    }
}
void GetOutput(float arr[][MAX],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
float Find_Max_Row(float arr[][MAX],int n,float sum[]){
    int temp=0;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i]+=arr[i][j];
        }
       
    }
    for(int i=1;i<n;i++){
        if(sum[0]<sum[i]){
            sum[0]=sum[i];
            temp=i;
        }
    }
    return temp+1;
}
float Find_Min_Col(float arr[][MAX],int n,float min[]){
    int temp=0;
for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            min[j]+=arr[i][j];
        }
       
    }
    for(int j=1;j<n;j++){
        if(min[0]>min[j]){
            min[0]=min[j];
            temp=j;
        }
    }
    return temp+1;
}
int main (){
int n;
cout<<"Nhap so hang hoac cot cua mang: ";
cin>>n;
float a[MAX][MAX];
float max[n]={0};
float min[n]={0};
GetInput(a,n);
GetOutput(a,n);
cout<<"Hang co tong lon nhat la hang: "<<Find_Max_Row(a,n,max);
cout<<"\n Cot co tong be nhat la cot: "<<Find_Min_Col(a,n,min);
}