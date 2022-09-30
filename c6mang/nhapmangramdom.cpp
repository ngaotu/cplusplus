#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void getInArray(int * array,int n){
    srand(time(NULL));      // gan gia tri thoi gian thuccua he thong
    for ( int i =0;i<n;i++){
array[i]=rand()%1000+1;
    }
}
void getOutArray(int * array,int n){
    for ( int i =0;i<n;i++){
cout<<array[i]<<" ";
    }
}
int main (){
int n;
cout<<"\nnhap so luong phan tu mang: ";
cin>>n;
int *array=new int [n];
getInArray(array,n);
getOutArray(array,n);
delete [] array; // xoa bo cap phat dong
    return 0;
}