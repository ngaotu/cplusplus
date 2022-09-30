#include <iostream>
#include <cmath>
using namespace std;
  void Input(int  & n ){
      cout<<"Nhap n: ";
      cin>>n;
  }
  void GetInput( int * a, int n){
      int index=0;
      for(int *p =&a[0];p< &a[n];p++){
          
          cout<<"a["<<index<<"]= ";
          cin>>*p;
          index++;

      }
  }
  void GetOutput( int * a, int n){
      for(int *p =&a[0];p< &a[n];p++){
          
         cout<<*p<<" ";
      }
  }
bool CheckPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
  void PrintPrime(int *a,int n){
      cout<<"\nCac so nguyen to co trong day la: ";
      for(int *p = &a[0];p<&a[n];p++){
        if(CheckPrime(*p)==true){
            cout<<*p<<" ";
        }
      }
  }
  bool CheckSquare(int num){
      int tmp = sqrt(num);
      if(tmp*tmp!=num){
          return false;
      }
      return true;
  }
 int SumOfSquareNum(int *a,int n){
     int sum = 0;
     for(int * p =&a[0];p<&a[n];p++){
      if(CheckSquare(*p)==true){
        sum+=*p;
      }
     }
     return sum;
 }
int main (){
    int n;
    int *a = new int (n);
    Input(n);
    GetInput(a,n);
    GetOutput(a,n);
    PrintPrime(a,n);
    cout<<"\nTong cac so chinh phuong la: "<<SumOfSquareNum(a,n);
    return 0;
}