#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void getInArray(int * array,int n){
    srand(time(NULL));                          // nhap mang ramdom
    for ( int i =0;i<n;i++){
array[i]=rand()%100+1;
    }
}                                          // xuat mang ramdom
void getOutArray(int * array,int n){
    for ( int i =0;i<n;i++){
cout<<array[i]<<" ";
    }
}
int MinValue(int * array,int n,int & min){       //truyen tham chieu cho gia tri nho nhat cua mang
 min=array[0];
for(int i=1;i<n;i++){
    if(min>array[i]){
        min=array[i];
    }
}
    return min ; 
}
void arrangeIn(int* array,int n){
for(int i=0;i<n;i++){                    //duyet 2 vong lap de sap xep amng the thu tu tang dan
    for(int j=n;j>i;j--){
        if(array[i]>array[j]){
            swap(array[i],array[j]);
        }
    }
    }
}

void ArrangeOddEven(int * array , int n){
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((array[i]%2!=0)&&(array[j]%2==0)){
            swap(array[i],array[j]);
        }
    }
    }

}
// ham chinh 
int main (){
int n;
cout<<"\nElements Of This array: ";
cin>>n;
int chon;
cout<<"Case = \n";
cin>>chon;
int *array=new int [n];
getInArray(array,n);
getOutArray(array,n);
int min;
cout<<"\nMinArrayValue: "<<MinValue(array,n,min);
cout<<endl;
cout<<"======ARRANGE---ARRAY======="<<endl;
if(chon==1){
       cout<<"\n Arrange_Increasing: ";
arrangeIn(array,n);
getOutArray(array,n);}
if(chon==2){
    cout<<"\n Arrange_Odd_Even: ";
ArrangeOddEven(array,n);
getOutArray(array,n);}
delete[]array;
    return 0;
}