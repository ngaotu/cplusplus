#include <iostream>
using namespace std;

int main (){
   int x;
   cout<<"Nhap x: ";
   cin>>x;
   if(x%2==0){
       cout<<x*x;
   } else {
       cout<<x*x*x;
   }

    return 0;
}