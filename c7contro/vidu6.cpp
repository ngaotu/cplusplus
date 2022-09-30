#include <iostream>
using namespace std;
  void GetInput( int * a, int n){
      int index=0;
      for(int *p =&a[0];p< &a[n];p++){
          
          cout<<"a["<<index<<"]= ";
          cin>>*p;
          index++;

      }
  }
  void GetOutput(int *a,int n){
    for(int * p =&a[0];p<&a[n];p++){
        cout<<*p<<" ";
    }
  }
  void FindNumber(int * a,int n){
   int count =1;
   for(int*p=&a[1];p<&a[n];p++){
       if(*p%a[0]==0){
           count++;
       }
   }
   cout<<"So cac phan tu chia het cho "<<a[0]<<" la: "<<count;
  }
int main (){
int n;
cout<<"Nhap n: ";
cin>>n;
int *a = new int [n];
GetInput(a,n);
GetOutput(a,n);
FindNumber(a,n);
delete[] a;
    return 0;
}