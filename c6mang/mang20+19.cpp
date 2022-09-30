#include <iostream>
#include <cmath>
#define Row 20        // so hang max la 20
#define Collumn 20       // so cot max la 20
using namespace std;
void GetInputArray(int a[][Collumn],int rows,int collumns){
    for (int i=0;i<rows;i++){
for(int j=0;j<collumns;j++){
cout<<"a["<<i<<"]["<<j<<"]= ";
cin>>a[i][j];
}
    }
}
void GetOutputArray(int a[][Collumn],int rows,int collumns){
    for (int i=0;i<rows;i++){
for(int j=0;j<collumns;j++){
cout<<a[i][j]<<"  ";
}
cout<<endl;
    }
}

void MaxMin(int a[][Collumn],int r,int c){
    int max,min;
    max=min=a[0][0];
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
            if(min>a[i][j]){
                min=a[i][j];
            }
        }
    }
    cout<<"Max_Value: "<<max<<endl;
    cout<<"Min_Value: "<<min<<endl;
}
double Giatri_TB(int a[][Collumn],int rows,int collumns,double& tb){ // tinh gia tri trung bin hcac
    double sum=0;
    for (int i=0;i<rows;i++){
for(int j=0;j<collumns;j++){
sum+=a[i][j];
}
    }
    tb=(sum/(rows*collumns))*1.0;
    // ep kieu gia tri tb ve kieu double
return tb;
}

void Sum_Collumn(int a[][Collumn],int rows,int collumns){
    int sum[collumns];
for(int j=0;j<collumns;j++){
    sum[j]=0;
 for (int i=0;i<rows;i++){
sum[j]+=a[i][j];
}
cout<<sum[j]<<" ";
    }
}
bool Square_Number(int so){         // ktra so chinh phuong
if(so<=0){
    return false ;
}
int x;
x=sqrt(so);
if(x*x!=so){
    return false;
}
return true;
}
void SquareArray(int a[][Collumn],int rows,int collumns){        // dem so chinh phuong
    cout<<"\n Square_Number: ";
    for(int i=0;i<rows;i++){
        for(int j=0;j<collumns;j++){
        if(Square_Number(a[i][j])==true){                                
            cout<<a[i][j]<<"  ";       
        }
        }
    }
}


void Add_Value(int a[][Collumn],int rows,int collumns){
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<collumns;j++){
            if(a[i][j]<0){
                sum1+=a[i][j];  // tong so am
            }
            if(a[i][j]>0){
                sum2+=a[i][j]; // tong so duong
            
            if(a[i][j]%2==0){
                sum3+=a[i][j];  //tong so chan
            }
            else {
                sum4+=a[i][j]; // tong so le
            }

        }
        }
    }
    cout<<"\nTong cac so duong: "<<sum2;
    cout<<"\n Tong cac so am: "<<sum1;
      cout<<"\n Tong cac so chan: "<<sum3;
        cout<<"\n Tong cac so le: "<<sum4;
}

void FindMax_SumRows(int a[][Collumn],int rows,int collumns ){
int sum[rows];              //tim hang co tong cac phan tu la lon nhat
// tao mang tinh tong tung hang
int max,l; // l la hang co tong lon nhat 
l=0;
max=0;
for(int i=0;i<rows;i++){             
sum[i]=0;// gan gia tri mac dinh cho tong tung hang 
    for(int j=0;j<collumns;j++){
        sum[i]+=a[i][j];
    }
    if(max<sum[i]){
        max=sum[i];
        l=i;
    }
}
cout<<"\nHang co tong lon nhat: "<<l;

}
int main (){
int rows,collumns;
int a[Row][Collumn];
 cout<<"So hang: \n";
cin>>rows;
cout<<"So cot: \n";
cin>>collumns;

GetInputArray(a,rows,collumns);
GetOutputArray(a,rows,collumns);
MaxMin(a,rows,collumns);
double tb;
cout<<" GtriTb: "<<Giatri_TB(a,rows,collumns,tb);
cout<<"\n Tong cua tung cot: ";
Sum_Collumn(a,rows,collumns);
SquareArray(a,rows,collumns);
Add_Value(a,rows,collumns);
FindMax_SumRows(a,rows,collumns);
    return 0;
}