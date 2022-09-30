#include <bits/stdc++.h>
using namespace std;

long  Fibonacci(int n){
    if(n==0|| n==1 ){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main (){
int n;
// nhap so fibonacci can tinh
cout<<"Enter the number of Fibonacci number: ";
cin>>n;
int count=0;
while(n!=0){
cout<<Fibonacci(count)<<" ";
count++;
n--;
}



    return 0;
}