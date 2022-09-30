#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int n;
cout<<"Nhap n: \n";
cin>>n;

int* a=new int [n];
srand(time(NULL));
for(int i=0;i<n;i++){
a[i]=rand()%99+5;
}
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
delete [] a;
cout<<endl;
    return 0;
}